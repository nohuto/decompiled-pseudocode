/*
 * XREFs of WheapWmiExecuteMethod @ 0x140646840
 * Callers:
 *     WheaWmiDispatch @ 0x1403DBBB0 (WheaWmiDispatch.c)
 * Callees:
 *     WheapWmiExecuteErrorInjectionMethod @ 0x14064633C (WheapWmiExecuteErrorInjectionMethod.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x140646428 (WheapWmiExecuteErrorSourceMethod.c)
 *     WheapWmiExecutePluginCtlMethod @ 0x1406469A4 (WheapWmiExecutePluginCtlMethod.c)
 *     WheapWmiExecutePolicyManagementMethod @ 0x140646AB8 (WheapWmiExecutePolicyManagementMethod.c)
 */

__int64 __fastcall WheapWmiExecuteMethod(__int64 *a1, unsigned int a2, int *a3, int *a4)
{
  __int64 v4; // rax
  int v6; // r10d
  int *v8; // r8
  unsigned int v10; // edx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  int v18; // edx
  unsigned int v19; // ecx
  __int64 result; // rax
  int v21; // [rsp+48h] [rbp+10h] BYREF

  v4 = (unsigned int)a3[15];
  v6 = 0;
  v21 = 0;
  v8 = (int *)((char *)a3 + v4);
  v10 = a2 - v4;
  v12 = *a1;
  v13 = *(_QWORD *)&WHEAErrorSourceMethods_GUID.Data1 - *a1;
  if ( !v13 )
    v13 = *(_QWORD *)WHEAErrorSourceMethods_GUID.Data4 - a1[1];
  if ( v13 )
  {
    v15 = *(_QWORD *)&WHEAErrorInjectionMethods_GUID.Data1 - v12;
    if ( *(_QWORD *)&WHEAErrorInjectionMethods_GUID.Data1 == v12 )
      v15 = *(_QWORD *)WHEAErrorInjectionMethods_GUID.Data4 - a1[1];
    if ( v15 )
    {
      v16 = *(_QWORD *)&WHEAPolicyManagementMethods_GUID.Data1 - v12;
      if ( *(_QWORD *)&WHEAPolicyManagementMethods_GUID.Data1 == v12 )
        v16 = *(_QWORD *)WHEAPolicyManagementMethods_GUID.Data4 - a1[1];
      if ( v16 )
      {
        v17 = WHEAPluginCtlMethods_GUID - v12;
        if ( WHEAPluginCtlMethods_GUID == v12 )
          v17 = 0xBDECAD15FC3BEF8FuLL - a1[1];
        if ( v17 )
        {
          v19 = -1073741808;
          goto LABEL_23;
        }
        v14 = WheapWmiExecutePluginCtlMethod(a3[14], v10, (_DWORD)v8, (_DWORD)a4, (__int64)&v21);
      }
      else
      {
        v14 = WheapWmiExecutePolicyManagementMethod(a3[14], v10, (_DWORD)v8, a3[16], (__int64)&v21);
      }
    }
    else
    {
      v14 = WheapWmiExecuteErrorInjectionMethod(a3[14], v10, v8, a3[16], &v21);
    }
  }
  else
  {
    v14 = WheapWmiExecuteErrorSourceMethod(a3[14], v10, (unsigned int *)v8, a3[16], (unsigned int *)&v21);
  }
  v18 = v21;
  v19 = v14;
  v6 = v21 + a3[15];
  if ( v14 == -1073741789 )
  {
    if ( a2 < 0x38 )
    {
      v19 = -1073741789;
      v6 = 0;
    }
    else
    {
      a3[12] = v6;
      v19 = 0;
      v6 = 56;
      *a3 = 56;
      a3[11] = 32;
    }
  }
  else
  {
    *a3 = v6;
    a3[16] = v18;
  }
LABEL_23:
  result = v19;
  *a4 = v6;
  return result;
}
