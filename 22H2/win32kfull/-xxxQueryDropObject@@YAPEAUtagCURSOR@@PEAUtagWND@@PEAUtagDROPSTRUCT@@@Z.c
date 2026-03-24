/*
 * XREFs of ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247F08
 * Callers:
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247F08 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C02480D4 (xxxDragObject.c)
 * Callees:
 *     _ScreenToClient @ 0x1C0013DCC (_ScreenToClient.c)
 *     PtInRect @ 0x1C004DE1C (PtInRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     _ChildWindowFromPointEx @ 0x1C015F050 (_ChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247F08 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     _ClientToScreen @ 0x1C025D194 (_ClientToScreen.c)
 */

struct tagCURSOR *__fastcall xxxQueryDropObject(struct tagWND *a1, struct tagDROPSTRUCT *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r14
  unsigned __int64 v4; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // esi
  struct tagWND *v11; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rcx
  struct tagCURSOR *result; // rax
  __int64 v15; // rax
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h]
  unsigned __int64 v18; // [rsp+A0h] [rbp+30h] BYREF
  unsigned __int64 LowLimit; // [rsp+A8h] [rbp+38h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = (_DWORD *)((char *)a2 + 32);
  v4 = *((_QWORD *)a2 + 4);
  LowLimit = 0LL;
  v17 = 0LL;
  v18 = v4;
  v16 = 0LL;
  if ( !PtInRect((_DWORD *)(v2 + 88), v4) )
    return 0LL;
  if ( (*(_BYTE *)(v7 + 31) & 8) != 0 )
    return 0LL;
  v8 = *(_QWORD *)(v7 + 168);
  if ( v8 )
  {
    if ( !(unsigned int)GrePtInRegion(v8, (unsigned int)v4, HIDWORD(v18)) )
      return 0LL;
  }
  v9 = *((_QWORD *)a1 + 5);
  v10 = *(_BYTE *)(v9 + 31) & 0x20;
  if ( (*(_BYTE *)(v9 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v9 + 104), v4) )
  {
    ScreenToClient((__int64)a1, &v18);
    v11 = (struct tagWND *)ChildWindowFromPointEx((__int64)a1, v18, (unsigned __int8)v10 + 3);
    ClientToScreen(a1, &v18);
    if ( v11 )
    {
      if ( v11 != a1 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v16 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v16;
        *((_QWORD *)&v16 + 1) = v11;
        HMLockObject(v11);
        LowLimit = (unsigned __int64)xxxQueryDropObject(v11, a2);
        ThreadUnlock1(v13);
        result = (struct tagCURSOR *)LowLimit;
        if ( LowLimit )
          return result;
      }
    }
    v4 = v18;
  }
  ScreenToClient((__int64)a1, v3);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a1;
  v15 = xxxSendTransformableMessageTimeout(
          (unsigned __int64)a1,
          0x22Bu,
          v10,
          a2,
          2u,
          0xBB8u,
          (__int64 *)&LowLimit,
          1,
          0);
  result = (struct tagCURSOR *)(LowLimit & -(__int64)(v15 != 0));
  LowLimit = (unsigned __int64)result;
  if ( !result )
    goto LABEL_15;
  if ( result != (struct tagCURSOR *)1 )
    result = (struct tagCURSOR *)HMValidateHandle((unsigned __int64)result, 3u);
  if ( !result )
LABEL_15:
    *(_QWORD *)v3 = v4;
  return result;
}
