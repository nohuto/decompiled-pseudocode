/*
 * XREFs of WheapWmiExecuteMethod @ 0x140611BB0
 * Callers:
 *     WheaWmiDispatch @ 0x1403AA290 (WheaWmiDispatch.c)
 * Callees:
 *     WheapWmiExecuteErrorInjectionMethod @ 0x1406116AC (WheapWmiExecuteErrorInjectionMethod.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x140611798 (WheapWmiExecuteErrorSourceMethod.c)
 *     WheapWmiExecutePageOfflineMethod @ 0x140611D54 (WheapWmiExecutePageOfflineMethod.c)
 *     WheapWmiExecutePluginCtlMethod @ 0x140611DE4 (WheapWmiExecutePluginCtlMethod.c)
 *     WheapWmiExecutePolicyManagementMethod @ 0x140611EEC (WheapWmiExecutePolicyManagementMethod.c)
 */

__int64 __fastcall WheapWmiExecuteMethod(__int64 *a1, unsigned int a2, int *a3, int *a4)
{
  __int64 v4; // rax
  unsigned int v5; // r11d
  int *v8; // r8
  int v9; // r9d
  __int64 v10; // rax
  __int64 v12; // r10
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // edx
  unsigned int v19; // ecx
  __int64 result; // rax
  int v21; // [rsp+48h] [rbp+10h] BYREF

  v4 = (unsigned int)a3[15];
  v5 = a2 - v4;
  v8 = (int *)((char *)a3 + v4);
  v9 = 0;
  v10 = *a1;
  v21 = 0;
  v12 = *(_QWORD *)&WHEAErrorSourceMethods_GUID.Data1 - v10;
  if ( *(_QWORD *)&WHEAErrorSourceMethods_GUID.Data1 == v10 )
    v12 = *(_QWORD *)WHEAErrorSourceMethods_GUID.Data4 - a1[1];
  if ( v12 )
  {
    v14 = *(_QWORD *)&WHEAErrorInjectionMethods_GUID.Data1 - v10;
    if ( *(_QWORD *)&WHEAErrorInjectionMethods_GUID.Data1 == v10 )
      v14 = *(_QWORD *)WHEAErrorInjectionMethods_GUID.Data4 - a1[1];
    if ( v14 )
    {
      v15 = *(_QWORD *)&WHEAPolicyManagementMethods_GUID.Data1 - v10;
      if ( *(_QWORD *)&WHEAPolicyManagementMethods_GUID.Data1 == v10 )
        v15 = *(_QWORD *)WHEAPolicyManagementMethods_GUID.Data4 - a1[1];
      if ( v15 )
      {
        v16 = WHEAPluginCtlMethods_GUID - v10;
        if ( WHEAPluginCtlMethods_GUID == v10 )
          v16 = 0xBDECAD15FC3BEF8FuLL - a1[1];
        if ( v16 )
        {
          v17 = WHEAPageOfflineMethods_GUID - v10;
          if ( WHEAPageOfflineMethods_GUID == v10 )
            v17 = 0x3D6C14B7685E59B4LL - a1[1];
          if ( v17 )
          {
            v19 = -1073741808;
            goto LABEL_27;
          }
          v13 = WheapWmiExecutePageOfflineMethod(a3[14], v5, (_DWORD)v8, 0, (__int64)&v21);
        }
        else
        {
          v13 = WheapWmiExecutePluginCtlMethod(a3[14], v5, (_DWORD)v8, 0, (__int64)&v21);
        }
      }
      else
      {
        v13 = WheapWmiExecutePolicyManagementMethod(a3[14], v5, (_DWORD)v8, a3[16], (__int64)&v21);
      }
    }
    else
    {
      v13 = WheapWmiExecuteErrorInjectionMethod(a3[14], v5, v8, a3[16], &v21);
    }
  }
  else
  {
    v13 = WheapWmiExecuteErrorSourceMethod(a3[14], v5, (unsigned int *)v8, a3[16], (unsigned int *)&v21);
  }
  v18 = v21;
  v19 = v13;
  v9 = v21 + a3[15];
  if ( v13 == -1073741789 )
  {
    if ( a2 < 0x38 )
    {
      v19 = -1073741789;
      v9 = 0;
    }
    else
    {
      a3[12] = v9;
      v19 = 0;
      v9 = 56;
      *a3 = 56;
      a3[11] = 32;
    }
  }
  else
  {
    *a3 = v9;
    a3[16] = v18;
  }
LABEL_27:
  result = v19;
  *a4 = v9;
  return result;
}
