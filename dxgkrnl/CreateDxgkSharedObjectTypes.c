__int64 CreateDxgkSharedObjectTypes()
{
  __int64 result; // rax
  enum _POOL_TYPE v1; // [rsp+48h] [rbp-28h]
  struct _GENERIC_MAPPING v2; // [rsp+50h] [rbp-20h] BYREF
  struct _GENERIC_MAPPING v3; // [rsp+60h] [rbp-10h] BYREF

  result = 0LL;
  if ( g_pDxgkSharedAllocationObjectType
    || (v2 = (struct _GENERIC_MAPPING)xmmword_1C009AEF0,
        result = CreateSharedObject(
                   L"DxgkSharedResource",
                   0,
                   &v2,
                   (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))W32kStub_UserRemoveWindowedSwapChain,
                   0LL,
                   (void (*)(void *))DxgkSharedAllocationObDeleteProcedure,
                   0LL,
                   &g_pDxgkSharedAllocationObjectType,
                   0,
                   v1),
        (int)result >= 0) )
  {
    if ( g_pDxgkSharedKeyedMutexObjectType
      || (v2 = (struct _GENERIC_MAPPING)xmmword_1C009AF00,
          result = CreateSharedObject(
                     L"DxgkSharedKeyedMutexObject",
                     0,
                     &v2,
                     (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))W32kStub_UserRemoveWindowedSwapChain,
                     0LL,
                     (void (*)(void *))DxgkSharedKeyedMutexObjectObDeleteProcedure,
                     0LL,
                     &g_pDxgkSharedKeyedMutexObjectType,
                     0,
                     v1),
          (int)result >= 0) )
    {
      if ( g_pDxgkSharedSyncObjectType
        || (v2 = (struct _GENERIC_MAPPING)xmmword_1C009AF10,
            result = CreateSharedObject(
                       L"DxgkSharedSyncObject",
                       0,
                       &v2,
                       (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))W32kStub_UserRemoveWindowedSwapChain,
                       0LL,
                       (void (*)(void *))DxgkSharedSyncObjectObDeleteProcedure,
                       0LL,
                       &g_pDxgkSharedSyncObjectType,
                       0,
                       v1),
            (int)result >= 0) )
      {
        if ( g_pDxgkSharedSwapChainObjectType
          || (v2 = (struct _GENERIC_MAPPING)xmmword_1C009AF00,
              result = CreateSharedObject(
                         L"DxgkSharedSwapChainObject",
                         0,
                         &v2,
                         (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))W32kStub_UserRemoveWindowedSwapChain,
                         (void (*)(struct _EPROCESS *, void *, unsigned __int64, unsigned __int64))SwapChainObCloseProcedure,
                         (void (*)(void *))SwapChainObDeleteProcedure,
                         0LL,
                         &g_pDxgkSharedSwapChainObjectType,
                         0,
                         v1),
              (int)result >= 0) )
        {
          if ( g_pDxgkDisplayManagerObjectType
            || (v2 = (struct _GENERIC_MAPPING)xmmword_1C009AF00,
                result = CreateSharedObject(
                           L"DxgkDisplayManagerObject",
                           0,
                           &v2,
                           (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))W32kStub_UserRemoveWindowedSwapChain,
                           0LL,
                           (void (*)(void *))DxgkDisplayManagerDeleteProcedure,
                           0LL,
                           &g_pDxgkDisplayManagerObjectType,
                           0,
                           v1),
                (int)result >= 0) )
          {
            if ( g_pDxgkSharedProtectedSessionObjectType
              || (v2 = (struct _GENERIC_MAPPING)xmmword_1C009AF00,
                  result = CreateSharedObject(
                             L"DxgkSharedProtectedSessionObject",
                             0,
                             &v2,
                             (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))W32kStub_UserRemoveWindowedSwapChain,
                             0LL,
                             (void (*)(void *))DxgkSharedProtectedSessionObDeleteProcedure,
                             0LL,
                             &g_pDxgkSharedProtectedSessionObjectType,
                             0,
                             v1),
                  (int)result >= 0) )
            {
              if ( g_pDxgkSharedBundleObjectType
                || (v2 = (struct _GENERIC_MAPPING)xmmword_1C009AF20,
                    result = CreateSharedObject(
                               L"DxgkSharedBundleObject",
                               0,
                               &v2,
                               (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))W32kStub_UserRemoveWindowedSwapChain,
                               0LL,
                               (void (*)(void *))DxgkSharedBundleObjectObDeleteProcedure,
                               0LL,
                               &g_pDxgkSharedBundleObjectType,
                               0,
                               v1),
                    (int)result >= 0) )
              {
                if ( !g_pDxgkCompositionObjectType )
                {
                  v2 = *DxgkCompositionObject::GenericMapping(&v3);
                  return CreateSharedObject(
                           L"DxgkCompositionObject",
                           1,
                           &v2,
                           (int (__high *)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int))DxgkCompositionObject::Open,
                           (void (*)(struct _EPROCESS *, void *, unsigned __int64, unsigned __int64))DxgkCompositionObject::Close,
                           (void (*)(void *))DxgkCompositionObject::Delete,
                           (unsigned __int8 (*)(struct _EPROCESS *, void *, void *, char))DxgkCompositionObject::OkToClose,
                           &g_pDxgkCompositionObjectType,
                           0x400u,
                           v1);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
