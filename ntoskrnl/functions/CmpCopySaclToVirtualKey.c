__int64 __fastcall CmpCopySaclToVirtualKey(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v6; // edi
  unsigned int v7; // r12d
  ULONG_PTR v8; // rdx
  bool v10; // zf
  void *v11; // r15
  __int64 CellPaged; // rax
  int SaclSecurityDescriptor; // ebx
  __int64 CellFlat; // rax
  _WORD *v15; // r15
  __int64 v16; // r12
  _BYTE *v17; // rdi
  unsigned int v18; // r12d
  int v20; // [rsp+40h] [rbp-51h]
  __int64 v21; // [rsp+44h] [rbp-4Dh] BYREF
  int v22; // [rsp+4Ch] [rbp-45h]
  __int64 v23; // [rsp+50h] [rbp-41h] BYREF
  PSID Owner; // [rsp+58h] [rbp-39h] BYREF
  PACL Sacl; // [rsp+60h] [rbp-31h] BYREF
  __int64 v26; // [rsp+68h] [rbp-29h]
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-21h]
  void *Src; // [rsp+78h] [rbp-19h] BYREF
  __int64 v29; // [rsp+80h] [rbp-11h]
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+17h]
  BOOLEAN SaclDefaulted; // [rsp+F0h] [rbp+5Fh] BYREF
  BOOLEAN SaclPresent; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v34; // [rsp+108h] [rbp+77h]

  v34 = a4;
  v23 = 0xFFFFFFFFLL;
  v6 = *(_DWORD *)(a4 + 44);
  v7 = -1;
  v8 = *(unsigned int *)(a2 + 44);
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  SaclPresent = 0;
  v11 = 0LL;
  SaclDefaulted = 0;
  Owner = 0LL;
  v31 = 0LL;
  v22 = 0;
  Sacl = 0LL;
  Src = 0LL;
  v26 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v20 = -1;
  v21 = -1LL;
  LODWORD(BugCheckParameter4) = v6;
  if ( v10 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, v8, (unsigned int *)&v23);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, v8, &v23);
  v29 = CellPaged;
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                             (PSECURITY_DESCRIPTOR)(CellPaged + 20),
                             &SaclPresent,
                             &Sacl,
                             &SaclDefaulted);
  if ( SaclSecurityDescriptor < 0 )
    goto LABEL_35;
  if ( !SaclPresent )
  {
    v17 = (_BYTE *)(a3 + 140);
    goto LABEL_26;
  }
  if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(a3, v6, (_DWORD *)&v21 + 1);
  else
    CellFlat = HvpGetCellPaged(a3, v6, (unsigned int *)&v21 + 1);
  v15 = (_WORD *)(CellFlat + 20);
  v26 = CellFlat;
  v16 = CellFlat;
  SaclSecurityDescriptor = RtlCreateSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 *)(CellFlat + 20));
  v17 = (_BYTE *)(a3 + 140);
  if ( SaclSecurityDescriptor >= 0 )
  {
    WORD1(SecurityDescriptor[0]) = v15[1] & 0x7FFF;
    SaclSecurityDescriptor = RtlSetSaclSecurityDescriptor(
                               (__int64)SecurityDescriptor,
                               SaclPresent,
                               (__int64)Sacl,
                               SaclDefaulted);
    if ( SaclSecurityDescriptor >= 0 )
    {
      SaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(v15, &Owner, &SaclDefaulted);
      if ( SaclSecurityDescriptor >= 0 )
      {
        SaclSecurityDescriptor = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
        if ( SaclSecurityDescriptor >= 0 )
        {
          SaclSecurityDescriptor = RtlGetGroupSecurityDescriptor(v15, &Owner, &SaclDefaulted);
          if ( SaclSecurityDescriptor >= 0 )
          {
            SaclSecurityDescriptor = RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
            if ( SaclSecurityDescriptor >= 0 )
            {
              SaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v15, &SaclPresent, &Sacl, &SaclDefaulted);
              if ( SaclSecurityDescriptor >= 0 )
              {
                SaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(
                                           SecurityDescriptor,
                                           SaclPresent,
                                           Sacl,
                                           SaclDefaulted);
                if ( SaclSecurityDescriptor >= 0 )
                {
                  SaclSecurityDescriptor = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, 1, 1, &Src);
                  if ( SaclSecurityDescriptor < 0
                    || (SaclSecurityDescriptor = HvpMarkCellDirty(a3, (unsigned int)BugCheckParameter4, 0),
                        SaclSecurityDescriptor < 0)
                    || (SaclSecurityDescriptor = HvpMarkCellDirty(a3, *(unsigned int *)(v16 + 4), 0),
                        SaclSecurityDescriptor < 0)
                    || (SaclSecurityDescriptor = HvpMarkCellDirty(a3, *(unsigned int *)(v16 + 8), 0),
                        SaclSecurityDescriptor < 0) )
                  {
                    v11 = Src;
                    goto LABEL_28;
                  }
                  v18 = a5;
                  v11 = Src;
                  SaclSecurityDescriptor = CmpGetSecurityDescriptorNodeEx(
                                             a3,
                                             a5,
                                             v34,
                                             a5 >> 31,
                                             Src,
                                             0,
                                             (unsigned int *)&v21);
                  if ( SaclSecurityDescriptor < 0 )
                  {
                    v20 = v21;
LABEL_27:
                    v16 = v26;
LABEL_28:
                    if ( v11 )
                      SeReleaseSecurityDescriptor(v11, 0, 1);
                    goto LABEL_30;
                  }
                  CmpFreeSecurityDescriptor(a3, v18);
                  *(_DWORD *)(v34 + 44) = v21;
                  v20 = -1;
LABEL_26:
                  SaclSecurityDescriptor = 0;
                  goto LABEL_27;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_30:
  if ( v16 )
  {
    if ( (*v17 & 1) != 0 )
      HvpReleaseCellFlat(a3, (__int64 *)((char *)&v21 + 4));
    else
      HvpReleaseCellPaged(a3, (unsigned int *)&v21 + 1);
  }
  v7 = v20;
LABEL_35:
  if ( v29 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v23);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v23);
  }
  if ( v7 != -1 )
    CmpDereferenceSecurityNode(a3, v7);
  return (unsigned int)SaclSecurityDescriptor;
}
