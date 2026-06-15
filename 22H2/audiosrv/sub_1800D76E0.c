/*
 * XREFs of sub_1800D76E0 @ 0x1800D76E0
 * Callers:
 *     sub_1800D672C @ 0x1800D672C (sub_1800D672C.c)
 * Callees:
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 *     sub_180037744 @ 0x180037744 (sub_180037744.c)
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     sub_18004BBD0 @ 0x18004BBD0 (sub_18004BBD0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall sub_1800D76E0(_QWORD *a1, __int128 *a2, __int64 a3, unsigned __int16 *a4, void *Src)
{
  int v7; // r15d
  unsigned __int16 *v8; // rbx
  unsigned __int16 *v9; // r14
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rax
  int v15; // eax
  LPVOID pv; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 *v20; // [rsp+58h] [rbp-18h] BYREF
  __int128 v21; // [rsp+60h] [rbp-10h] BYREF
  LPVOID v22; // [rsp+A8h] [rbp+38h] BYREF

  v20 = 0LL;
  v21 = *a2;
  v7 = sub_180037744(a1, &v21, 0, 1, 0LL, &v20, 0LL);
  if ( v7 >= 0 )
  {
    if ( v20 )
    {
      pv = 0LL;
      v22 = 0LL;
      v7 = sub_180048714((unsigned __int16 *)Src, &pv);
      if ( v7 >= 0 )
      {
        v7 = sub_180048714(a4, &v22);
        if ( v7 >= 0 )
        {
          v8 = (unsigned __int16 *)pv;
          if ( (*((_WORD *)pv + 7) & 0xFFF8u) <= 0x100 )
          {
            sub_18004BBD0((__int64)pv);
            v9 = (unsigned __int16 *)v22;
            sub_18004BBD0((__int64)v22);
            v18 = 0LL;
            *(_QWORD *)&v21 = 0LL;
            v19 = 0LL;
            v7 = sub_18001F490(v9, (unsigned int)v9[8] + 18, &v18, 0.0, 0);
            if ( v7 >= 0 )
            {
              v7 = sub_18001F490(v8, (unsigned int)v8[8] + 18, (__int64 *)&v21, 0.0, 0);
              if ( v7 >= 0 )
              {
                v10 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
                v11 = v21;
                v12 = v18;
                v13 = v10 == 0;
                v14 = *v20;
                if ( v13 )
                  v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64 *))(v14 + 56))(
                          v20,
                          v18,
                          v21,
                          &v19);
                else
                  v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64 *))(v14 + 64))(
                          v20,
                          v18,
                          v21,
                          &v19);
                v7 = v15;
                if ( v15 && v15 != -2005073917 )
                  v7 = -2004287480;
                if ( v19 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
                if ( v11 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
                if ( v12 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
              }
              else
              {
                if ( v19 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
                if ( (_QWORD)v21 )
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 16LL))(v21);
                if ( v18 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
              }
            }
            else
            {
              if ( v19 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
              if ( v18 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            }
            CoTaskMemFree(v9);
            v22 = 0LL;
            CoTaskMemFree(v8);
            pv = 0LL;
          }
          else
          {
            v7 = -2004287480;
            CoTaskMemFree(v22);
            v22 = 0LL;
            CoTaskMemFree(v8);
            pv = 0LL;
          }
        }
        else
        {
          CoTaskMemFree(v22);
          v22 = 0LL;
          CoTaskMemFree(pv);
          pv = 0LL;
        }
      }
      else
      {
        CoTaskMemFree(0LL);
        v22 = 0LL;
        CoTaskMemFree(pv);
        pv = 0LL;
      }
    }
    else
    {
      v7 = 0;
    }
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64 *))(*v20 + 16))(v20);
  return (unsigned int)v7;
}
