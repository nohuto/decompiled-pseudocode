/*
 * XREFs of CmCheckRegistry @ 0x14072DEB4
 * Callers:
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14072C970 (CmpReorganizeHive.c)
 * Callees:
 *     SetFailureLocation @ 0x140243E5C (SetFailureLocation.c)
 *     RtlClearAllBits @ 0x1402B24A0 (RtlClearAllBits.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14071C9C4 (CmpValidateHiveSecurityDescriptors.c)
 *     HvCheckHive @ 0x1407A6080 (HvCheckHive.c)
 *     CmpCheckRegistry2 @ 0x1407B3F40 (CmpCheckRegistry2.c)
 */

__int64 __fastcall CmCheckRegistry(ULONG_PTR BugCheckParameter3, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int *v6; // r13
  RTL_BITMAP *p_BitMapHeader; // r12
  char v8; // si
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  unsigned int *v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // r9d
  int v16; // [rsp+20h] [rbp-49h]
  __int64 v17; // [rsp+40h] [rbp-29h] BYREF
  RTL_BITMAP BitMapHeader; // [rsp+48h] [rbp-21h] BYREF
  __int128 v19; // [rsp+58h] [rbp-11h] BYREF
  __int128 v20; // [rsp+68h] [rbp-1h]
  __int128 v21; // [rsp+78h] [rbp+Fh]
  __int64 v22; // [rsp+88h] [rbp+1Fh]
  char v23; // [rsp+D0h] [rbp+67h] BYREF
  int v24; // [rsp+D8h] [rbp+6Fh]
  int v25; // [rsp+E8h] [rbp+7Fh]

  v24 = a2;
  v3 = 0;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  v6 = 0LL;
  v22 = 0LL;
  p_BitMapHeader = 0LL;
  LODWORD(v17) = 0;
  v19 = 0LL;
  v8 = 0;
  v23 = 0;
  v20 = 0LL;
  v21 = 0LL;
  if ( BugCheckParameter3 == CmpMasterHive )
    return v3;
  v9 = *(_DWORD *)(BugCheckParameter3 + 280) >> 3;
  v10 = (((v9 + 7) >> 3) + 7) & 0xFFFFFFF8;
  if ( (a2 & 0x80000) != 0 )
  {
    v11 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24))(
                            v10,
                            0LL,
                            1649167683LL);
    v6 = v11;
    if ( !v11 )
    {
      v3 = -1073741670;
      SetFailureLocation(a3, 0, 11, -1073741670, 0);
      return v3;
    }
    BitMapHeader.SizeOfBitMap = v9;
    BitMapHeader.Buffer = v11;
    p_BitMapHeader = &BitMapHeader;
    RtlClearAllBits(&BitMapHeader);
    a2 = v24;
  }
  v12 = a2 & 0x10000;
  v25 = a2 & 0x10000;
  while ( 1 )
  {
    if ( v12 )
    {
      if ( p_BitMapHeader )
        RtlClearAllBits(p_BitMapHeader);
      v13 = HvCheckHive(BugCheckParameter3, a2, a3, (_DWORD)p_BitMapHeader, (__int64)&v19, a3);
      v3 = v13;
      if ( v13 < 0 )
      {
        v16 = 16;
        goto LABEL_25;
      }
      if ( (int)v19 + (int)v20 + (int)v21 > (unsigned int)CmpReorganizeLimit )
        *(_DWORD *)(BugCheckParameter3 + 4112) |= 0x400u;
      a2 = v24;
      *(_QWORD *)(BugCheckParameter3 + 4752) = v22;
    }
    if ( *(int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL) < 0 )
      break;
    v13 = CmpValidateHiveSecurityDescriptors(BugCheckParameter3, a2, &v23, p_BitMapHeader, a3);
    v3 = v13;
    if ( v13 < 0 )
    {
      if ( v13 != -2147483606 )
      {
        if ( v13 != -1073741267 )
        {
          v16 = 48;
          goto LABEL_25;
        }
        goto LABEL_23;
      }
      v8 = 1;
    }
    v13 = CmpCheckRegistry2(BugCheckParameter3, v23, (__int64)p_BitMapHeader, a3, (__int64)&v17);
    v3 = v13;
    if ( v13 >= 0 )
      goto LABEL_28;
    if ( v13 == -2147483606 )
    {
      v8 = 1;
LABEL_28:
      *(_DWORD *)(BugCheckParameter3 + 4764) = v17;
      v3 = v8 != 0 ? 0x8000002A : 0;
      goto LABEL_31;
    }
    if ( v13 != -1073741267 )
    {
      v16 = 64;
LABEL_25:
      v14 = v13;
      goto LABEL_30;
    }
LABEL_23:
    v12 = v25;
    v8 = 1;
    a2 = v24;
  }
  v3 = -1073741492;
  v16 = 32;
  v14 = -1073741492;
LABEL_30:
  SetFailureLocation(a3, 0, 11, v14, v16);
LABEL_31:
  if ( v6 )
    (*(void (__fastcall **)(unsigned int *, _QWORD))(BugCheckParameter3 + 32))(v6, v10);
  return v3;
}
