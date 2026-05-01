/*
 * XREFs of ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x1801C4BAC
 * Callers:
 *     ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x1801B9FE0 (-ForgetApplication@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x1801BA190 (-ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x18005DF50 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800809C0 (--4-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x1801C4C8C (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 */

__int64 __fastcall CApplicationManager::_DeleteApplicationData(CApplicationManager *this, const unsigned __int16 *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  LPCWCH v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  v2 = 0LL;
  v4 = *((_QWORD *)this + 130);
  v11 = 0LL;
  if ( v4
    && (v6 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
               v4,
               *((_DWORD *)this + 257),
               &v12),
        *(_DWORD *)v6 == 1) )
  {
    Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::operator=((__int64 *)&v11, (__int64 *)(v6 + 16));
    v2 = v11;
    if ( *(_QWORD *)(v11 + 16) != 1LL )
    {
      v7 = -2147024809;
      goto LABEL_10;
    }
    if ( *(_QWORD *)(v11 + 16) )
    {
      v11 = **(_QWORD **)(v11 + 8);
      v7 = CApplicationManager::_DeleteApplicationData(this, a2, &v11);
      goto LABEL_10;
    }
    v7 = -2147316575;
    v8 = 8457LL;
  }
  else
  {
    v7 = -2147319765;
    v8 = 8449LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v7);
LABEL_10:
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 16LL))(v2);
  return v7;
}
