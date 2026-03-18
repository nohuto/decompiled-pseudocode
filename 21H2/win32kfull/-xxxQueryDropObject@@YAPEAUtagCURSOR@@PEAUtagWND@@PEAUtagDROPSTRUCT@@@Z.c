/*
 * XREFs of ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0244120
 * Callers:
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0244120 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C02442A8 (xxxDragObject.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1C0077940 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     _ScreenToClient @ 0x1C009CB08 (_ScreenToClient.c)
 *     _ChildWindowFromPointEx @ 0x1C016D33A (_ChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0244120 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     _ClientToScreen @ 0x1C025A47C (_ClientToScreen.c)
 */

struct tagCURSOR *__fastcall xxxQueryDropObject(struct tagWND *a1, struct tagDROPSTRUCT *a2)
{
  __int64 v2; // r8
  struct tagPOINT *v3; // r14
  struct tagPOINT v4; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // esi
  struct tagWND *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct tagCURSOR *result; // rax
  __int64 v15; // rax
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h]
  struct tagPOINT v18; // [rsp+A0h] [rbp+30h] BYREF
  __int64 DropObject; // [rsp+A8h] [rbp+38h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = (struct tagPOINT *)((char *)a2 + 32);
  v4 = (struct tagPOINT)*((_QWORD *)a2 + 4);
  DropObject = 0LL;
  v17 = 0LL;
  v18 = v4;
  v16 = 0LL;
  if ( !PtInRect((_DWORD *)(v2 + 88), *(_QWORD *)&v4)
    || (*(_BYTE *)(v7 + 31) & 8) != 0
    || tagWND::PtOutsideClipRgnOrMaxClip(a1, &v18) )
  {
    return 0LL;
  }
  v8 = *((_QWORD *)a1 + 5);
  v9 = *(_BYTE *)(v8 + 31) & 0x20;
  if ( (*(_BYTE *)(v8 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v8 + 104), *(_QWORD *)&v4) )
  {
    ScreenToClient((__int64)a1, &v18);
    v10 = ChildWindowFromPointEx(a1, v18, (unsigned __int8)v9 + 3);
    ClientToScreen(a1, &v18);
    if ( v10 )
    {
      if ( v10 != a1 )
      {
        ThreadLock((__int64)v10, (__int64 *)&v16);
        DropObject = (__int64)xxxQueryDropObject(v10, a2);
        ThreadUnlock1(v12, v11, v13);
        result = (struct tagCURSOR *)DropObject;
        if ( DropObject )
          return result;
      }
    }
    v4 = v18;
  }
  ScreenToClient((__int64)a1, v3);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a1;
  v15 = xxxSendTransformableMessageTimeout(
          (unsigned __int64 *)a1,
          0x22Bu,
          v9,
          (__int64)a2,
          2u,
          0xBB8u,
          (unsigned __int64 *)&DropObject,
          1,
          0);
  result = (struct tagCURSOR *)(DropObject & -(__int64)(v15 != 0));
  DropObject = (__int64)result;
  if ( !result )
    goto LABEL_14;
  if ( result != (struct tagCURSOR *)1 )
    result = (struct tagCURSOR *)HMValidateHandle((__int64)result, 3u);
  if ( !result )
LABEL_14:
    *v3 = v4;
  return result;
}
