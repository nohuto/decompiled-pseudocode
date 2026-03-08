/*
 * XREFs of ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C01994B4
 * Callers:
 *     GreSetMagicColors @ 0x1C01995FC (GreSetMagicColors.c)
 * Callees:
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C0184CFC (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall bSetMagicColor(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rsi
  unsigned int v7; // edi
  __int64 v8; // r14
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // eax
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+68h] [rbp+20h]

  v16 = a4;
  v15 = a2;
  v4 = a3;
  v7 = 0;
  v8 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( *(_DWORD *)(a2 + 60) == 20 && (*(_DWORD *)(a2 + 24) & 0x11000) == 0 )
  {
    v9 = *(_QWORD *)(a2 + 112);
    HIBYTE(v16) = 48;
    v10 = v16;
    *(_DWORD *)(v9 + 4 * v4) = v16;
    XEPALOBJ::vUpdateTime((XEPALOBJ *)&v15);
    v11 = *(_QWORD *)(*(_QWORD *)a1 + 1784LL);
    if ( v11 )
      *(_DWORD *)(*(_QWORD *)(v11 + 112) + 4 * v4) = v10;
    v12 = (unsigned int)(v4 - 236);
    HIBYTE(v16) = 0;
    v13 = v16;
    v7 = 1;
    if ( (unsigned int)v4 <= 0xA )
      v12 = (unsigned int)v4;
    *(_DWORD *)(v8 + 4 * v12 + 3856) = v16;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 6000) + 112LL) + 4 * v12) = v13;
  }
  return v7;
}
