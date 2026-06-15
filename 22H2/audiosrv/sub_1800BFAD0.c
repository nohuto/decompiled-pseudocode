/*
 * XREFs of sub_1800BFAD0 @ 0x1800BFAD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005CB34 @ 0x18005CB34 (sub_18005CB34.c)
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BFAD0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  int v6; // edi
  __int64 v7; // r14
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 i; // r15
  struct _RTL_CRITICAL_SECTION *v10; // rcx
  unsigned int v11; // eax
  unsigned int j; // edi
  _OWORD *v13; // rax
  int v14; // eax
  int *v16; // rbx
  unsigned int v17; // [rsp+30h] [rbp-98h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+38h] [rbp-90h]
  __int64 v19; // [rsp+40h] [rbp-88h]
  ATL::CAtlException *v20; // [rsp+48h] [rbp-80h] BYREF
  _OWORD v21[7]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v24; // [rsp+E8h] [rbp+20h]

  v24 = a4;
  v5 = a1;
  v23 = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x37u, (__int64)&unk_18016DDC0, a1);
  }
  if ( !a3 )
    return 0;
  v7 = v5 + 256;
  v19 = v5 + 256;
  EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 256));
  v8 = (struct _RTL_CRITICAL_SECTION *)(v5 + 256);
  v18 = (struct _RTL_CRITICAL_SECTION *)(v5 + 256);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a3 )
    {
      if ( *(_QWORD *)(v5 + 248) )
      {
LABEL_23:
        v11 = v23;
        if ( *(_DWORD *)(v5 + 124) != v23 && *(_DWORD *)(v5 + 124) )
        {
          for ( j = 1; ; ++j )
          {
            v17 = j;
            if ( j >= v11 )
            {
              *(_DWORD *)(v5 + 124) = v11;
              break;
            }
            v13 = (_OWORD *)sub_18005D19C((_QWORD *)(v5 + 88), 0LL);
            try
            {
              v21[0] = *v13;
              v21[1] = v13[1];
              v21[2] = v13[2];
              v21[3] = v13[3];
              sub_18005CB34((_QWORD *)(v5 + 88), j, (__int64)v21);
            }
            catch ( ATL::CAtlException *v20 )
            {
              v16 = (int *)v20;
              if ( *(_DWORD *)v20 == -1073741571 )
                o__resetstkoflw();
              v6 = *v16;
              if ( *v16 < 0 )
              {
                if ( !v19 )
                  goto LABEL_41;
                v10 = v18;
LABEL_15:
                LeaveCriticalSection(v10);
                goto LABEL_41;
              }
              v5 = a1;
              v8 = v18;
              j = v17;
              v7 = v19;
            }
            v11 = v23;
          }
        }
        if ( v7 )
          LeaveCriticalSection(v8);
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 216LL))(v5);
        v6 = v14;
        if ( v14 >= 0 )
        {
          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 4u )
          {
            sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 0x39u, (__int64)&unk_18016DDC0, v5, v14);
          }
          goto LABEL_41;
        }
      }
      else
      {
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x38u, (__int64)&unk_18016DDC0);
        }
        v6 = -2147467262;
        if ( v5 != -256 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 256));
      }
LABEL_42:
      sub_18005E8F8((__int64)"CVolumeSoftware::InitializeAPOs", 2254, v6);
      return (unsigned int)v6;
    }
    sub_180071C14((_QWORD *)(v5 + 248));
    if ( (***(int (__fastcall ****)(_QWORD, void *, __int64))(v24 + 8 * i))(
           *(_QWORD *)(v24 + 8 * i),
           &unk_18015DEA8,
           v5 + 248) >= 0 )
      break;
LABEL_12:
    ;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v5 + 248) + 40LL))(*(_QWORD *)(v5 + 248), &v23);
  if ( v6 >= 0 )
  {
    if ( *(_QWORD *)(v5 + 248) )
      goto LABEL_23;
    goto LABEL_12;
  }
  if ( v5 != -256 )
  {
    v10 = (struct _RTL_CRITICAL_SECTION *)(v5 + 256);
    goto LABEL_15;
  }
LABEL_41:
  if ( v6 < 0 )
    goto LABEL_42;
  return (unsigned int)v6;
}
