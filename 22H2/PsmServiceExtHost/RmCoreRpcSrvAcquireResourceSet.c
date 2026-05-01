/*
 * XREFs of RmCoreRpcSrvAcquireResourceSet @ 0x180033780
 * Callers:
 *     <none>
 * Callees:
 *     CempUtilValidateSid @ 0x18000E5C0 (CempUtilValidateSid.c)
 *     RmpResourceLimitsAreLegal @ 0x18000F728 (RmpResourceLimitsAreLegal.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180011DF0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180013120 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180027654 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x1800338F4 (-RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@P.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180045B70 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmCoreRpcSrvAcquireResourceSet(
        struct _RM_SERVICE_GLOBALS **a1,
        ExecutionModel *this,
        __int64 a3,
        wchar_t *a4,
        PSID Sid,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned __int64 *a10)
{
  __int64 v13; // rdx
  int v14; // ebx
  struct ExecutionModel::_ResourceSetInfo *v15; // r8
  struct ExecutionModel::IResourceSetCallback *v16; // rdi
  unsigned __int64 v17; // rsi
  int v18; // ebx
  bool v19; // cf
  unsigned int v20; // ebx
  bool v22; // [rsp+60h] [rbp-1D8h] BYREF
  _BYTE v23[384]; // [rsp+70h] [rbp-1C8h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v23);
  if ( RmpResourceLimitsAreLegal(v13 + 40, 0LL) )
  {
    v14 = CempUtilValidateSid(Sid, a6);
    if ( v14 < 0 )
    {
      return (unsigned int)(v14 + 4);
    }
    else
    {
      ExecutionModel::RmpResourceSetPropertiesToResourceSetInfo(this, (struct _RM_RESOURCE_SET_PROPERTIES *)v23, v15);
      v16 = (struct ExecutionModel::IResourceSetCallback *)operator new(
                                                             0x10uLL,
                                                             (const struct std::nothrow_t *)&std::nothrow);
      if ( v16 )
      {
        *(_QWORD *)v16 = &ResourceSetCallbackThunk::`vftable';
        *((_DWORD *)v16 + 2) = 1;
      }
      else
      {
        v16 = 0LL;
      }
      if ( v16 )
      {
        v17 = HamObjectIdGenerate(1);
        v18 = RmSrvAcquireResourceSet(
                *a1,
                (struct ExecutionModel::_ResourceSetInfo *)v23,
                v16,
                0LL,
                a4,
                Sid,
                a7,
                a8,
                a9,
                v17,
                (struct _RM_ACTIVATOR *)a1,
                &v22);
        if ( v18 < 0 )
        {
          v20 = v18 & 0xEFFFFFFF;
        }
        else
        {
          v19 = v22;
          *a10 = v17;
          v20 = v19 ? 0x103 : 0;
        }
        (*(void (__fastcall **)(struct ExecutionModel::IResourceSetCallback *))(*(_QWORD *)v16 + 16LL))(v16);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v20;
}
