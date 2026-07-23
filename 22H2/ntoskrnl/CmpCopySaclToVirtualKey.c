/*
 * XREFs of CmpCopySaclToVirtualKey @ 0x140871814
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x14086FFEC (CmpDoBuildVirtualStack.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1402526B0 (RtlGetDaclSecurityDescriptor.c)
 *     CmpDereferenceSecurityNode @ 0x1403EFFFC (CmpDereferenceSecurityNode.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1405DADB0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140603560 (RtlCreateSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1406111D0 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x14065D3B0 (RtlGetOwnerSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1406D4920 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1406D5510 (SeReleaseSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D92C0 (RtlSetDaclSecurityDescriptor.c)
 *     CmpFreeSecurityDescriptor @ 0x1406E5308 (CmpFreeSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorNode @ 0x1406E6940 (CmpGetSecurityDescriptorNode.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1406EFA00 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406EFA60 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140738C50 (RtlGetGroupSecurityDescriptor.c)
 *     HvMarkCellDirty @ 0x14087BD38 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpCopySaclToVirtualKey(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *); // rax
  unsigned int v10; // r14d
  __int64 v11; // rax
  int SaclSecurityDescriptor; // ebx
  __int64 v14; // rax
  __int64 v15; // r15
  _WORD *v16; // rsi
  int v17; // eax
  void *v18; // rsi
  __int64 v19; // r14
  unsigned int v20; // [rsp+30h] [rbp-41h] BYREF
  PSID Owner; // [rsp+38h] [rbp-39h] BYREF
  PACL Sacl; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-29h]
  _DWORD v24[2]; // [rsp+50h] [rbp-21h] BYREF
  _DWORD v25[2]; // [rsp+58h] [rbp-19h] BYREF
  void *v26; // [rsp+60h] [rbp-11h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v28; // [rsp+88h] [rbp+17h]
  BOOLEAN SaclDefaulted; // [rsp+D0h] [rbp+5Fh] BYREF
  BOOLEAN SaclPresent; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v31; // [rsp+E8h] [rbp+77h]

  v31 = a4;
  v5 = *(_DWORD *)(a4 + 44);
  v6 = *(unsigned int *)(a2 + 44);
  SaclPresent = 0;
  v25[1] = 0;
  v28 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8);
  v25[0] = -1;
  v10 = -1;
  v24[0] = -1;
  v24[1] = 0;
  v20 = -1;
  SaclDefaulted = 0;
  Owner = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  Sacl = 0LL;
  v26 = 0LL;
  v23 = v5;
  v11 = v9(a1, v6, v25);
  if ( !v11 )
    return 3221225626LL;
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                             (PSECURITY_DESCRIPTOR)(v11 + 20),
                             &SaclPresent,
                             &Sacl,
                             &SaclDefaulted);
  if ( SaclSecurityDescriptor >= 0 )
  {
    if ( SaclPresent )
    {
      v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v5, v24);
      v15 = v14;
      if ( v14 )
      {
        v16 = (_WORD *)(v14 + 20);
        SaclSecurityDescriptor = RtlCreateSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 *)(v14 + 20));
        if ( SaclSecurityDescriptor >= 0 )
        {
          WORD1(SecurityDescriptor[0]) = v16[1] & 0x7FFF;
          SaclSecurityDescriptor = RtlSetSaclSecurityDescriptor(SecurityDescriptor, SaclPresent, Sacl, SaclDefaulted);
          if ( SaclSecurityDescriptor >= 0 )
          {
            SaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(v16, &Owner, &SaclDefaulted);
            if ( SaclSecurityDescriptor >= 0 )
            {
              SaclSecurityDescriptor = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
              if ( SaclSecurityDescriptor >= 0 )
              {
                SaclSecurityDescriptor = RtlGetGroupSecurityDescriptor(v16, &Owner, &SaclDefaulted);
                if ( SaclSecurityDescriptor >= 0 )
                {
                  SaclSecurityDescriptor = RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
                  if ( SaclSecurityDescriptor >= 0 )
                  {
                    SaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v16, &SaclPresent, &Sacl, &SaclDefaulted);
                    if ( SaclSecurityDescriptor >= 0 )
                    {
                      SaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(
                                                 SecurityDescriptor,
                                                 SaclPresent,
                                                 Sacl,
                                                 SaclDefaulted);
                      if ( SaclSecurityDescriptor >= 0 )
                      {
                        v17 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, PagedPool, 1, &v26);
                        v18 = v26;
                        SaclSecurityDescriptor = v17;
                        if ( v17 >= 0 )
                        {
                          if ( (unsigned __int8)HvMarkCellDirty(a3, v23, 0LL)
                            && (unsigned __int8)HvMarkCellDirty(a3, *(unsigned int *)(v15 + 4), 0LL)
                            && (unsigned __int8)HvMarkCellDirty(a3, *(unsigned int *)(v15 + 8), 0LL) )
                          {
                            v19 = v31;
                            SaclSecurityDescriptor = CmpGetSecurityDescriptorNode(a3, a5, v31, v18, 0, &v20);
                            if ( SaclSecurityDescriptor < 0 )
                            {
                              v10 = v20;
                            }
                            else
                            {
                              CmpFreeSecurityDescriptor(a3, a5);
                              *(_DWORD *)(v19 + 44) = v20;
                              v10 = -1;
                            }
                          }
                          else
                          {
                            SeReleaseSecurityDescriptor(v18, 0, 1);
                            SaclSecurityDescriptor = -1073741443;
                          }
                        }
                        if ( v18 )
                          SeReleaseSecurityDescriptor(v18, 0, 1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v24);
      }
    }
  }
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v25);
  if ( v10 != -1 )
    CmpDereferenceSecurityNode(a3, v10);
  return (unsigned int)SaclSecurityDescriptor;
}
