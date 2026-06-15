/*
 * XREFs of sub_18002B0A0 @ 0x18002B0A0
 * Callers:
 *     sub_180003D20 @ 0x180003D20 (sub_180003D20.c)
 * Callees:
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_18002C26C @ 0x18002C26C (sub_18002C26C.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_18002B0A0(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rdx
  int v5; // edi
  int v6; // r13d
  __int64 v7; // rcx
  __int16 *v8; // r15
  __int16 v9; // cx
  int v10; // eax
  __int16 v11; // ax
  __int64 v12; // r8
  __int16 v13; // r12
  __int64 v14; // rsi
  int v15; // ebx
  __int16 v17; // ax
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]
  char v21; // [rsp+90h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+58h] BYREF

  sub_18002C26C(a2);
  v4 = *a1;
  v5 = 0;
  v18 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  pv = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
         *(_QWORD *)&dwCreationFlags,
         v4,
         &v18);
  if ( v6 >= 0 )
  {
    v7 = v23;
    if ( v23 != v18 )
    {
      sub_18002BB14(&v23, v18, &unk_18015B660);
      v7 = v23;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 24LL))(v7, &v21);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v18 + 24LL))(v18, &unk_18015B078, 23LL);
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 32LL))(v20, 0LL, &v19);
        if ( v6 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v19 + 72LL))(v19, &pv);
          if ( v6 >= 0 )
          {
            v8 = (__int16 *)pv;
            v9 = *(_WORD *)pv;
            if ( !*(_WORD *)pv )
              goto LABEL_18;
            do
            {
              v10 = v5 + 1;
              if ( v9 != 35 )
                v10 = v5;
              v5 = v10;
              if ( v10 == 2 )
              {
                v17 = v8[1];
                for ( ++v8; v17 != 35; ++v8 )
                {
                  if ( !v17 )
                    break;
                  v17 = v8[1];
                }
                v5 = 3;
              }
              v11 = o_towlower();
              v12 = *a2;
              v13 = v11;
              v14 = *(int *)(*a2 - 16);
              v15 = v14 + 1;
              if ( (int)((*(_DWORD *)(*a2 - 12) - (v14 + 1)) | (1 - *(_DWORD *)(*a2 - 8))) < 0 )
              {
                sub_18001B550(a2, v15);
                v12 = *a2;
              }
              *(_WORD *)(v12 + 2LL * (unsigned int)v14) = v13;
              if ( v15 < 0 || v15 > *(_DWORD *)(*a2 - 12) )
                sub_1800B8610(2147942487LL);
              *(_DWORD *)(*a2 - 16) = v15;
              ++v8;
              *(_WORD *)(*a2 + 2 * v14 + 2) = 0;
              v9 = *v8;
            }
            while ( *v8 );
          }
        }
      }
    }
  }
  v8 = (__int16 *)pv;
LABEL_18:
  if ( v8 )
  {
    CoTaskMemFree(v8);
    pv = 0LL;
  }
  if ( v6 < 0 )
    sub_18005E8F8("CAudioEndpointId::ToMigratedString", 250LL, (unsigned int)v6);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)v6;
}
