/*
 * XREFs of ?MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x18005B070
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180035318 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180047B04 (--$FindEx@VCTaskWindowFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$C.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CImmersiveApp::MatchByWindow(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __int64 v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  char v9; // al
  bool result; // al
  bool v11; // bl
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( (a3 & 4) != 0 )
    return CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184)) == *(HWND *)a2;
  v13 = 0LL;
  v6 = 0LL;
  if ( *(_QWORD *)(a1 + 360) )
  {
    while ( !*(_BYTE *)(a2 + 16) )
    {
      v7 = *(__int64 **)(*(_QWORD *)(a1 + 352) + 8 * v6);
      v8 = *v7;
      if ( *(_QWORD *)a2 )
      {
        if ( (*(__int64 (**)(void))(v8 + 32))() == *(_QWORD *)a2 )
          break;
      }
      else if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v8 + 48))(v7, *(_QWORD *)(a2 + 8)) )
      {
        break;
      }
      if ( (unsigned __int64)++v6 >= *(_QWORD *)(a1 + 360) )
        goto LABEL_7;
    }
    v9 = 1;
  }
  else
  {
LABEL_7:
    v9 = 0;
  }
  result = v9
        || (v3 & 1) != 0
        && (v13 = 0LL,
            v11 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
                         (_QWORD *)(a1 + 440),
                         a2,
                         a3,
                         v12) >= 0,
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13),
            v11)
        || (v3 & 2) != 0
        && *(_QWORD *)a2
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 192LL))(*(_QWORD *)(a1 + 336));
  return result;
}
