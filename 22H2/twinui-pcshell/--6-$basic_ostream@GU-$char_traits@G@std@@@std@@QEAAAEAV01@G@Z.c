/*
 * XREFs of ??6?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@G@Z @ 0x180152E4C
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x180155EAC (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x1802BC394 (--0sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x1802BCABC (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_ostream<unsigned short>::operator<<(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // rdi
  unsigned __int16 v6; // ax
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int16 v9; // ax
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+10h]

  v1 = a1;
  v2 = 0;
  v13 = 0;
  std::basic_ostream<unsigned short>::sentry::sentry(v11, a1);
  if ( v11[8] )
  {
    if ( std::ios_base::width((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL))) > 1 )
      v3 = std::ios_base::width((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL))) - 1;
    else
      v3 = 0LL;
    try
    {
      if ( (std::ios_base::flags((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL))) & 0x1C0) == 0x40 )
      {
LABEL_9:
        v7 = std::basic_ios<unsigned short>::rdbuf(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
        if ( (unsigned __int16)std::basic_streambuf<unsigned short>::sputc(v7, 44LL) == 0xFFFF )
          v2 = 4;
        while ( 1 )
        {
          v13 = v2;
          if ( v2 || v3 <= 0 )
            break;
          v8 = std::basic_ios<unsigned short>::rdbuf(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
          v9 = std::basic_ios<unsigned short>::fill(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
          --v3;
          v2 = 4 * ((unsigned __int16)std::basic_streambuf<unsigned short>::sputc(v8, v9) == 0xFFFF);
        }
      }
      else
      {
        while ( !v2 )
        {
          if ( v3 <= 0 )
            goto LABEL_9;
          v5 = std::basic_ios<unsigned short>::rdbuf(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
          v6 = std::basic_ios<unsigned short>::fill(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
          --v3;
          v2 = 4 * ((unsigned __int16)std::basic_streambuf<unsigned short>::sputc(v5, v6) == 0xFFFF);
          v13 = v2;
        }
      }
    }
    catch ( ... )
    {
      LOBYTE(v4) = 1;
      std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v4);
      v1 = a1;
      v2 = v13;
    }
  }
  std::ios_base::width((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL)), 0LL);
  std::basic_ios<unsigned short>::setstate(v1 + *(int *)(*(_QWORD *)v1 + 4LL), v2, 0LL);
  std::basic_ostream<unsigned short>::sentry::~sentry(v11);
  return v1;
}
