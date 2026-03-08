/*
 * XREFs of KdpPrompt @ 0x140AB24E8
 * Callers:
 *     KdpTrap @ 0x140AAD1CC (KdpTrap.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     KdExitDebugger @ 0x140AAD2D0 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140AAD40C (KdEnterDebugger.c)
 *     KdpQuickMoveMemory @ 0x140AAE918 (KdpQuickMoveMemory.c)
 *     KdLogDbgPrint @ 0x140AB2000 (KdLogDbgPrint.c)
 *     KdpPromptString @ 0x140AB2D4C (KdpPromptString.c)
 */

__int64 __fastcall KdpPrompt(
        char *a1,
        unsigned __int16 a2,
        volatile void *a3,
        unsigned __int16 a4,
        char a5,
        __int64 a6)
{
  char *v7; // rdi
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // r14
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  char *v12; // r9
  void *v13; // rsp
  char *v14; // rcx
  char v15; // bl
  _BYTE v17[480]; // [rsp+0h] [rbp-400h] BYREF
  _BYTE v18[480]; // [rsp+200h] [rbp-200h] BYREF
  _WORD v19[2]; // [rsp+400h] [rbp+0h] BYREF
  int v20; // [rsp+404h] [rbp+4h]
  char *v21; // [rsp+408h] [rbp+8h]
  __int128 v22; // [rsp+410h] [rbp+10h] BYREF
  _BYTE *v23; // [rsp+420h] [rbp+20h]

  v7 = a1;
  v20 = 0;
  v22 = 0LL;
  v8 = 512;
  if ( a2 <= 0x200u )
    v8 = a2;
  v9 = 512;
  if ( a4 <= 0x200u )
    v9 = a4;
  if ( a5 )
  {
    if ( v8 )
    {
      v10 = (unsigned __int64)&a1[v8];
      if ( v10 > 0x7FFFFFFF0000LL || v10 < (unsigned __int64)v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v11 = alloca(512LL);
    v23 = v18;
    KdpQuickMoveMemory((__int64)v18, v7, v8);
    v7 = v12;
    ProbeForWrite(a3, v9, 1u);
    v13 = alloca(512LL);
    v14 = v17;
    v23 = v17;
  }
  else
  {
    v14 = (char *)a3;
  }
  v21 = v14;
  v19[0] = 0;
  v19[1] = v9;
  *((_QWORD *)&v22 + 1) = v7;
  LOWORD(v22) = v8;
  KdLogDbgPrint((char **)&v22);
  v15 = KdEnterDebugger(a6);
  while ( (unsigned __int8)KdpPromptString(&v22, v19) == 1 )
    ;
  KdExitDebugger(v15);
  if ( a5 == 1 )
    KdpQuickMoveMemory((__int64)a3, v21, v19[0]);
  return v19[0];
}
