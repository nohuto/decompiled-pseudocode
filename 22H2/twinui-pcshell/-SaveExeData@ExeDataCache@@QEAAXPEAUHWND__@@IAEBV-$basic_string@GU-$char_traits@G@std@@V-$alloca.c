/*
 * XREFs of ?SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x1804CCA38
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1804CD0B4 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@2@V?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@@Z @ 0x1804CB278 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHWND__@@@2@V-$tuple@AEAIAEBV-$bas.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ExeDataCache::SaveExeData(
        PSRWLOCK SRWLock,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v7; // r9
  __int64 *Ptr; // r8
  __int64 v9; // rax
  __int64 v10[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v11; // [rsp+78h] [rbp+28h] BYREF
  int v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = a3;
  v11 = a2;
  AcquireSRWLockExclusive(SRWLock);
  Ptr = (__int64 *)SRWLock[1].Ptr;
  v9 = Ptr[1];
  if ( *(_BYTE *)(v9 + 25) )
    goto LABEL_8;
  do
  {
    if ( *(_QWORD *)(v9 + 32) >= v11 )
    {
      Ptr = (__int64 *)v9;
      v9 = *(_QWORD *)v9;
    }
    else
    {
      v9 = *(_QWORD *)(v9 + 16);
    }
  }
  while ( !*(_BYTE *)(v9 + 25) );
  if ( Ptr == SRWLock[1].Ptr || v11 < Ptr[4] )
  {
LABEL_8:
    v10[0] = (__int64)a5;
    v10[1] = a4;
    v10[2] = (__int64)&v12;
    a5 = &v11;
    std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<HWND__ * const &>,std::tuple<unsigned int &,std::wstring const &,std::wstring const &>>(
      (__int64 *)&SRWLock[1],
      &v13,
      Ptr,
      v7,
      &a5,
      v10);
  }
  ReleaseSRWLockExclusive(SRWLock);
}
