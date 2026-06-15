/*
 * XREFs of sub_180066570 @ 0x180066570
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180141124 @ 0x180141124 (sub_180141124.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180066570(char *pv, __int64 a2)
{
  HANDLE EventW; // rax
  struct _TP_WAIT *ThreadpoolWait; // rax
  signed int v6; // ebx
  __int64 v7; // rax
  signed int LastError; // eax
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h]
  __int64 v15; // [rsp+50h] [rbp-20h] BYREF
  __int128 v16; // [rsp+58h] [rbp-18h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v15 = 0LL;
  v16 = xmmword_18015B730;
  if ( a2 )
  {
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)pv + 5) = EventW;
    if ( (((unsigned __int64)EventW + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_3;
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
    {
LABEL_3:
      ThreadpoolWait = CreateThreadpoolWait(sub_180140C80, pv, 0LL);
      *((_QWORD *)pv + 4) = ThreadpoolWait;
      if ( ThreadpoolWait )
      {
        SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)pv + 5), 0LL);
        v6 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 24LL))(a2, &unk_18015B078, 23LL);
        if ( v6 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, &v13);
          if ( v6 >= 0 )
          {
            v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 64LL))(v13, &v12);
            if ( v6 >= 0 )
            {
              v6 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v12)(v12, &unk_18015AFA0, &v11);
              if ( v6 >= 0 )
              {
                v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 56LL))(v11, &v16);
                if ( v6 >= 0 )
                {
                  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 96LL))(v11, &v15);
                  if ( v6 >= 0 )
                  {
                    v7 = v16 - 0x4258D903686D7CC0LL;
                    if ( (_QWORD)v16 == 0x4258D903686D7CC0LL )
                      v7 = *((_QWORD *)&v16 + 1) - 0x1C7480353D3A43B4LL;
                    if ( v7 )
                    {
                      v6 = -2147467259;
                    }
                    else
                    {
                      v6 = sub_180141124(pv + 24);
                      if ( v6 >= 0 )
                      {
                        v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)pv + 3) + 56LL))(
                                *((_QWORD *)pv + 3),
                                pv + 256);
                        v6 = 0;
                        if ( v10 < 0 )
                          v6 = v10;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v6 = -2147024882;
      }
    }
  }
  else
  {
    v6 = -2147024809;
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v6;
}
