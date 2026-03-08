/*
 * XREFs of ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02323EC
 * Callers:
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02323EC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C023257C (xxxDragObject.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1C00DEEB0 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     _ScreenToClient @ 0x1C00E8E64 (_ScreenToClient.c)
 *     _ChildWindowFromPointEx @ 0x1C01489CA (_ChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02323EC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     _ClientToScreen @ 0x1C024E7D0 (_ClientToScreen.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct tagCURSOR *result; // rax
  __int64 v17; // rax
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]
  struct tagPOINT v20; // [rsp+A0h] [rbp+30h] BYREF
  __int64 DropObject; // [rsp+A8h] [rbp+38h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = (struct tagPOINT *)((char *)a2 + 32);
  v4 = (struct tagPOINT)*((_QWORD *)a2 + 4);
  DropObject = 0LL;
  v19 = 0LL;
  v20 = v4;
  v18 = 0LL;
  if ( !PtInRect((_DWORD *)(v2 + 88), *(_QWORD *)&v4)
    || (*(_BYTE *)(v7 + 31) & 8) != 0
    || tagWND::PtOutsideClipRgnOrMaxClip(a1, &v20) )
  {
    return 0LL;
  }
  v8 = *((_QWORD *)a1 + 5);
  v9 = *(_BYTE *)(v8 + 31) & 0x20;
  if ( (*(_BYTE *)(v8 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v8 + 104), *(_QWORD *)&v4) )
  {
    ScreenToClient((__int64)a1, &v20);
    v10 = ChildWindowFromPointEx(a1, v20, (unsigned __int8)v9 + 3);
    ClientToScreen(a1, &v20, v11, v12);
    if ( v10 )
    {
      if ( v10 != a1 )
      {
        ThreadLock(v10, &v18);
        DropObject = (__int64)xxxQueryDropObject(v10, a2);
        ThreadUnlock1(v14, v13, v15);
        result = (struct tagCURSOR *)DropObject;
        if ( DropObject )
          return result;
      }
    }
    v4 = v20;
  }
  ScreenToClient((__int64)a1, v3);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a1;
  v17 = xxxSendTransformableMessageTimeout(
          a1,
          0x22Bu,
          v9,
          (__int128 *)a2,
          2u,
          0xBB8u,
          (unsigned __int64 *)&DropObject,
          1,
          0);
  result = (struct tagCURSOR *)(DropObject & -(__int64)(v17 != 0));
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
