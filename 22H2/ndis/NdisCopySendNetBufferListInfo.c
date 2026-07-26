/*
 * XREFs of NdisCopySendNetBufferListInfo @ 0x1C00AD620
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0066398 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     NetioCopyOpaqueNetBufferListInformation @ 0x1C00ADA58 (NetioCopyOpaqueNetBufferListInformation.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00AEAC0 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 */

void __stdcall NdisCopySendNetBufferListInfo(PNET_BUFFER_LIST DestNetBufferList, PNET_BUFFER_LIST SrcNetBufferList)
{
  char v4; // cl
  __int64 v5; // r9
  signed __int64 v6; // r8
  __int64 v7; // r10
  void *v8; // rax
  void **v9; // rdx
  void **v10; // rdx
  __int64 v11; // r10
  void *v12; // rax
  void **v13; // rcx
  const struct _EVENT_DESCRIPTOR *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int8 v17; // [rsp+20h] [rbp-78h]
  const struct _GUID *v18; // [rsp+28h] [rbp-70h]
  struct _GUID v19; // [rsp+40h] [rbp-58h]
  struct _GUID v20; // [rsp+50h] [rbp-48h]
  struct _GUID v21; // [rsp+60h] [rbp-38h] BYREF
  struct _GUID v22; // [rsp+70h] [rbp-28h] BYREF

  v4 = (__int64)SrcNetBufferList->NetBufferListInfo[7] & 0xF;
  if ( !v4 )
    v4 = *((_BYTE *)SrcNetBufferList->NdisPoolHandle + 32);
  DestNetBufferList->NetBufferListInfo[0] = SrcNetBufferList->NetBufferListInfo[0];
  v5 = 2LL;
  v6 = (char *)SrcNetBufferList - (char *)DestNetBufferList;
  DestNetBufferList->NetBufferListInfo[1] = SrcNetBufferList->NetBufferListInfo[1];
  v7 = 2LL;
  v8 = SrcNetBufferList->NetBufferListInfo[2];
  v9 = &DestNetBufferList->NetBufferListInfo[22];
  DestNetBufferList->NetBufferListInfo[2] = v8;
  do
  {
    *v9 = *(void **)((char *)v9 + v6);
    ++v9;
    --v7;
  }
  while ( v7 );
  v10 = &DestNetBufferList->NetBufferListInfo[3];
  v11 = 2LL;
  do
  {
    *v10 = *(void **)((char *)v10 + v6);
    ++v10;
    --v11;
  }
  while ( v11 );
  DestNetBufferList->NetBufferListInfo[6] = SrcNetBufferList->NetBufferListInfo[6];
  DestNetBufferList->NetBufferListInfo[5] = SrcNetBufferList->NetBufferListInfo[5];
  v12 = SrcNetBufferList->NetBufferListInfo[8];
  LOBYTE(DestNetBufferList->NetBufferListInfo[7]) = v4;
  v13 = &DestNetBufferList->NetBufferListInfo[11];
  DestNetBufferList->NetBufferListInfo[8] = v12;
  do
  {
    *v13 = *(void **)((char *)v13 + v6);
    ++v13;
    --v5;
  }
  while ( v5 );
  DestNetBufferList->NetBufferListInfo[20] = SrcNetBufferList->NetBufferListInfo[20];
  DestNetBufferList->NetBufferListInfo[24] = SrcNetBufferList->NetBufferListInfo[24];
  DestNetBufferList->NetBufferListInfo[25] = SrcNetBufferList->NetBufferListInfo[25];
  DestNetBufferList->NetBufferListInfo[14] = SrcNetBufferList->NetBufferListInfo[14];
  if ( (SrcNetBufferList->NblFlags & 0x10000) != 0 )
    DestNetBufferList->NblFlags |= 0x10000u;
  NetioCopyOpaqueNetBufferListInformation(DestNetBufferList, SrcNetBufferList);
  if ( byte_1C00E4FD0 )
  {
    DestNetBufferList->NetBufferListInfo[13] = SrcNetBufferList->NetBufferListInfo[13];
  }
  else if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    ndisGenerateNetBufferListCorrelationIds(DestNetBufferList, 1u);
    *(_QWORD *)v19.Data4 = v15;
    *(_QWORD *)&v19.Data1 = (__int64)DestNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    v16 = (__int64)SrcNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    v22 = v19;
    *(_QWORD *)&v20.Data1 = v16;
    *(_QWORD *)v20.Data4 = v15;
    v21 = v20;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      EtwEx_tidActivityInfoTransfer(0x7FFFFFFFFFFFFFFFLL, v14, &v22, &v21, v17, v18, 4u);
  }
}
