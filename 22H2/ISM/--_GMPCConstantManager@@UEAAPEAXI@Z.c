/*
 * XREFs of ??_GMPCConstantManager@@UEAAPEAXI@Z @ 0x18006E260
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DA10 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@1@@Z @ 0x18006D44C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4InputType@@V-$map@V-$basic_string@GU-$ch.c)
 */

MPCConstantManager *__fastcall MPCConstantManager::`scalar deleting destructor'(MPCConstantManager *this, char a2)
{
  void **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  Microsoft::BamoImpl::BamoImplObject *v8; // rcx

  v4 = (void **)((char *)this + 72);
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>,void *>>>(
    (__int64)this + 72,
    (__int64)this + 72,
    *(void ***)(*((_QWORD *)this + 9) + 8LL));
  std::_Deallocate<16,0>(*v4, (const struct std::nothrow_t *)0x38);
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>,void *>>>(
    (__int64)this + 56,
    (__int64)this + 56,
    *(void ***)(*((_QWORD *)this + 7) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 7), (const struct std::nothrow_t *)0x38);
  v8 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v8 )
    Microsoft::BamoImpl::BamoImplObject::Release(v8, v5, v6, v7);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
