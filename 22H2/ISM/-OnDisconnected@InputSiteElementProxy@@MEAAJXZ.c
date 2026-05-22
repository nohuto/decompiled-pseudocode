/*
 * XREFs of ?OnDisconnected@InputSiteElementProxy@@MEAAJXZ @ 0x180004A20
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180004A64 (-erase@-$vector@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputS.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180004B28 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 */

__int64 __fastcall InputSiteElementProxy::OnDisconnected(InputSiteElementProxy *this)
{
  struct InputSiteManager *InputSiteManager; // rax
  InputSiteElementProxy **i; // r8
  char v5; // [rsp+30h] [rbp+8h] BYREF

  InputSiteManager = ISMStatics::GetInputSiteManager();
  for ( i = (InputSiteElementProxy **)*((_QWORD *)InputSiteManager + 10);
        i != *((InputSiteElementProxy ***)InputSiteManager + 11) && *i != this;
        ++i )
  {
    ;
  }
  std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::erase((char *)InputSiteManager + 80, &v5);
  return 0LL;
}
