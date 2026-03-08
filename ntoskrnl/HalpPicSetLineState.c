/*
 * XREFs of HalpPicSetLineState @ 0x140525800
 * Callers:
 *     <none>
 * Callees:
 *     HalpIoDelay @ 0x140411C50 (HalpIoDelay.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x140504708 (WRITE_PORT_USHORT_PAIR.c)
 *     READ_PORT_USHORT_PAIR @ 0x14052592C (READ_PORT_USHORT_PAIR.c)
 */

__int64 __fastcall HalpPicSetLineState(_DWORD *a1, __int64 a2, __int64 a3)
{
  bool v6; // bl
  int v7; // edi
  unsigned __int16 v8; // ax
  int v9; // ecx
  int v10; // ebx
  int v11; // edx
  int v12; // ecx

  if ( *(_BYTE *)(a3 + 4) )
    return 3221225659LL;
  v6 = 0;
  if ( *a1 == 45056 )
  {
    v6 = *(_DWORD *)(a2 + 4) == 2;
    v7 = 0;
  }
  else
  {
    v7 = 8;
  }
  v8 = READ_PORT_USHORT_PAIR(1232LL, 1233LL);
  if ( *(_DWORD *)(a3 + 8) || v6 )
    v9 = v8 & ~(1 << (v7 + *(_BYTE *)(a2 + 4)));
  else
    v9 = v8 | (1 << (v7 + *(_BYTE *)(a2 + 4)));
  WRITE_PORT_USHORT_PAIR(0x4D0u, 0x4D1u, v9);
  v10 = (unsigned __int16)READ_PORT_USHORT_PAIR(33LL, 161LL);
  HalpIoDelay();
  v11 = v7 + *(_DWORD *)(a2 + 4);
  if ( (*(_DWORD *)(a3 + 12) & 1) != 0 )
    v12 = v10 & ~(1 << v11);
  else
    v12 = v10 | (1 << v11);
  WRITE_PORT_USHORT_PAIR(0x21u, 0xA1u, v12);
  HalpIoDelay();
  return 0LL;
}
