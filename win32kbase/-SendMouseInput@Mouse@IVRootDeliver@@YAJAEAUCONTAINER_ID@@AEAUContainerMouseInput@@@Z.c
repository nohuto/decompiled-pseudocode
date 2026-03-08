/*
 * XREFs of ?SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z @ 0x1C02269D4
 * Callers:
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C022CEC8 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C0226B08 (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C0228560 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

__int64 __fastcall IVRootDeliver::Mouse::SendMouseInput(
        IVRootDeliver::Mouse *this,
        struct CONTAINER_ID *a2,
        struct ContainerMouseInput *a3,
        __int64 a4)
{
  int v5; // r14d
  __int64 v6; // rax
  const struct ContainerMouseInput *v7; // r9
  __int64 v8; // r15
  unsigned int v9; // ebx
  unsigned int v10; // esi
  char v11; // dl
  __int64 v12; // rcx
  const struct CONTAINER_ID *v13; // r12
  unsigned __int64 v14; // rax
  __int64 v15; // r13
  int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  int v19; // [rsp+38h] [rbp-18h]
  __int64 v20; // [rsp+3Ch] [rbp-14h]
  int v21; // [rsp+44h] [rbp-Ch]
  char v23; // [rsp+A0h] [rbp+50h]
  __int64 v24; // [rsp+A8h] [rbp+58h]

  v5 = 0;
  v6 = SGDGetUserSessionState(this, a2, a3, a4);
  if ( CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(v6 + 3272) + 1360LL)) )
  {
    v8 = *(_QWORD *)a2;
    v9 = 1;
    v10 = *((_DWORD *)a2 + 2);
    v11 = 0;
    v23 = 0;
    v12 = *(_QWORD *)a2;
    v24 = *(_QWORD *)a2;
    v13 = *(const struct CONTAINER_ID **)(*(_QWORD *)a2 + 24LL);
    if ( v10 )
    {
      do
      {
        v14 = (unsigned __int64)v9 << 6;
        v15 = v14 + v8;
        if ( *(const struct CONTAINER_ID **)(v14 + v8 + 24) != v13 || v9 == v10 )
        {
          v18 = v12;
          v19 = (__int64)(v8 + v14 - v12) >> 6;
          v21 = 0;
          v20 = 0LL;
          if ( !v11 && *((_BYTE *)a2 + 20) )
          {
            v16 = *((_DWORD *)a2 + 5);
            v20 = *(_QWORD *)((char *)a2 + 12);
            v21 = v16;
            v23 = 1;
          }
          v5 = IVRootDeliver::Mouse::Detail::SendMouseInputToContainer(this, v13, &v18, v7);
          if ( v5 < 0 )
            return (unsigned int)v5;
          v11 = v23;
          if ( v9 == v10 )
          {
            v12 = v24;
          }
          else
          {
            v13 = *(const struct CONTAINER_ID **)(v15 + 24);
            v12 = v15;
            v24 = v15;
          }
        }
        v10 = *((_DWORD *)a2 + 2);
        ++v9;
      }
      while ( v9 <= v10 );
    }
  }
  return (unsigned int)v5;
}
