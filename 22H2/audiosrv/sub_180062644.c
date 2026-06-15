/*
 * XREFs of sub_180062644 @ 0x180062644
 * Callers:
 *     sub_18006259C @ 0x18006259C (sub_18006259C.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180051B0C @ 0x180051B0C (sub_180051B0C.c)
 *     sub_1800627C0 @ 0x1800627C0 (sub_1800627C0.c)
 *     sub_180062808 @ 0x180062808 (sub_180062808.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_1800B4E2C @ 0x1800B4E2C (sub_1800B4E2C.c)
 *     sub_1800B5768 @ 0x1800B5768 (sub_1800B5768.c)
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 *     sub_1800FA18C @ 0x1800FA18C (sub_1800FA18C.c)
 *     sub_1800FABB0 @ 0x1800FABB0 (sub_1800FABB0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180062644(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  HANDLE Event; // r14
  void *v15; // rbp
  int v16; // edi
  unsigned int v17; // eax
  PTP_WAIT ThreadpoolWait; // rbp
  struct _TP_WAIT *v19; // r14
  int v21; // edx
  DWORD LastError; // edi
  int v23; // eax
  DWORD v24; // edi
  void *retaddr; // [rsp+58h] [rbp+0h]

  v7 = sub_18006A18C(160LL, &unk_18019F848);
  if ( v7 )
    v9 = sub_180062808(v7, a2, v8, a4);
  else
    v9 = 0LL;
  v10 = v9;
  if ( !v9 )
  {
    v16 = -2147024882;
    v21 = 221;
LABEL_21:
    sub_18004BD84((int)retaddr, v21, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/registry.h", v16);
    goto LABEL_14;
  }
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v15 = *(void **)(v9 + 128);
    if ( v15 )
    {
      LastError = GetLastError();
      sub_180051B0C(v15);
      SetLastError(LastError);
    }
    *(_QWORD *)(v9 + 128) = Event;
    v16 = 0;
  }
  else
  {
    v16 = sub_1800B4E2C(v12, v11, v13);
  }
  if ( v16 < 0 )
  {
    v21 = 222;
    goto LABEL_21;
  }
  v17 = RegNotifyChangeKeyValue(
          *(HKEY *)(v9 + 120),
          *(unsigned __int8 *)(v9 + 144),
          0x10000005u,
          *(HANDLE *)(v9 + 128),
          1);
  if ( v17 )
  {
    v23 = sub_1800CA660(retaddr, 225LL, "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/registry.h", v17);
  }
  else
  {
    ThreadpoolWait = CreateThreadpoolWait(pfnwa, (PVOID)v9, 0LL);
    v19 = *(struct _TP_WAIT **)(v9 + 136);
    if ( v19 )
    {
      v24 = GetLastError();
      sub_1800FABB0(v19);
      SetLastError(v24);
    }
    *(_QWORD *)(v9 + 136) = ThreadpoolWait;
    if ( ThreadpoolWait )
    {
      v10 = 0LL;
      sub_1800627C0(a1, v9);
      SetThreadpoolWait(*(PTP_WAIT *)(*(_QWORD *)a1 + 136LL), *(HANDLE *)(*(_QWORD *)a1 + 128LL), 0LL);
      v16 = 0;
      goto LABEL_14;
    }
    v23 = sub_1800B5768(retaddr, 228LL, "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/registry.h");
  }
  v16 = v23;
LABEL_14:
  if ( v10 )
    sub_1800FA18C(v10);
  return (unsigned int)v16;
}
