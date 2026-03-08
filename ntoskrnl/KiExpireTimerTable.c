/*
 * XREFs of KiExpireTimerTable @ 0x14057A154
 * Callers:
 *     KiTimerExpiration @ 0x14057A354 (KiTimerExpiration.c)
 * Callees:
 *     KiProcessExpiredTimerList @ 0x140251760 (KiProcessExpiredTimerList.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveEntryTimer @ 0x1403BCED8 (KiRemoveEntryTimer.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall KiExpireTimerTable(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        unsigned int a7,
        int *a8)
{
  unsigned int v9; // r13d
  unsigned int v10; // r8d
  int v11; // r9d
  int v12; // ebp
  __int64 v13; // r14
  unsigned __int64 v14; // rcx
  unsigned __int64 v16; // rbx
  _QWORD *v17; // rdi
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rax
  ULONG_PTR v20; // rsi
  ULONG_PTR BugCheckParameter4; // r15
  volatile signed __int64 *v22; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 i; // [rsp+38h] [rbp-70h]
  unsigned int v24; // [rsp+40h] [rbp-68h]
  unsigned int v26; // [rsp+C0h] [rbp+18h]
  int v27; // [rsp+C8h] [rbp+20h]
  char v28[8]; // [rsp+D0h] [rbp+28h]

  v9 = 0;
  v10 = a3 + a4 - 1;
  v11 = v10 + a5;
  v26 = v10;
  v12 = a3 - 1;
  v27 = v10 + a5;
  v13 = 0LL;
  v28[0] = -64;
  v14 = (unsigned __int64)a7 << 8;
  for ( i = v14; ; v14 = i )
  {
    v16 = a2 + 32 * ((unsigned __int8)++v12 + v14 + 16);
    if ( v9 <= v10 || *(_QWORD *)(v16 + 24) <= a6 )
    {
      v17 = (_QWORD *)(v16 + 8);
      if ( v17 != (_QWORD *)*v17 )
      {
        while ( 2 )
        {
          a7 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
          {
            do
              KeYieldProcessorEx(&a7);
            while ( *(_QWORD *)v16 );
          }
          v22 = (volatile signed __int64 *)v16;
          do
          {
            v18 = (_QWORD *)*v17;
            if ( v17 == (_QWORD *)*v17 )
              goto LABEL_17;
            v19 = *(v18 - 1);
            v20 = (ULONG_PTR)(v18 - 4);
            if ( v19 > a6 )
            {
              *(_QWORD *)(v16 + 24) = v19;
LABEL_17:
              _InterlockedAnd64(v22, 0LL);
              goto LABEL_18;
            }
            v24 = 0;
            v28[0] ^= (v13 ^ v28[0]) & 0x3F;
            HIBYTE(v24) = *(_BYTE *)(v20 + 3) ^ v28[0];
            _InterlockedXor((volatile signed __int32 *)v20, v24);
            BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(a2 + 8 * v13), v20);
            KiRemoveEntryTimer(a2, v20, (unsigned __int8)v12, &v22);
            v13 = (unsigned int)(v13 + 1);
            if ( BugCheckParameter4 )
              KeBugCheckEx(0xC7u, 8uLL, 1uLL, v20, BugCheckParameter4);
          }
          while ( (_DWORD)v13 != 64 );
          _InterlockedAnd64(v22, 0LL);
          KiProcessExpiredTimerList(a1, a8, a2, 0x40u);
          v13 = 0LL;
          if ( v17 != (_QWORD *)*v17 )
            continue;
          break;
        }
LABEL_18:
        v11 = v27;
        v10 = v26;
      }
      ++v9;
    }
    if ( v12 == v11 )
      break;
  }
  if ( (_DWORD)v13 )
    KiProcessExpiredTimerList(a1, a8, a2, v13);
}
