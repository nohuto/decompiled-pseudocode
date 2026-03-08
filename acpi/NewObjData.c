/*
 * XREFs of NewObjData @ 0x1C004C19C
 * Callers:
 *     AMLICreateNativeNamespaceObject @ 0x1C00499F8 (AMLICreateNativeNamespaceObject.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C004A82C (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C004A920 (AMLICreateOverrideObjectDep.c)
 *     DupObjData @ 0x1C004AF04 (DupObjData.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C004BD50 (GetObjectTypeName.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 */

__int64 __fastcall NewObjData(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rbx
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  int ObjectTypeName; // eax

  v2 = *(unsigned __int16 *)(a2 + 2);
  v3 = 0LL;
  if ( v2 > 0x82 )
  {
    v15 = v2 - 131;
    if ( !v15 )
    {
      v9 = *(unsigned int *)(a2 + 24);
      v10 = 1329874504LL;
      return HeapAlloc(a1, v10, v9);
    }
    if ( v15 == 1 )
    {
      v9 = *(unsigned int *)(a2 + 24);
      v10 = 1180191048LL;
      return HeapAlloc(a1, v10, v9);
    }
    goto LABEL_30;
  }
  if ( v2 == 130 )
  {
    v9 = *(unsigned int *)(a2 + 24);
    v10 = 1179337288LL;
    return HeapAlloc(a1, v10, v9);
  }
  if ( v2 > 8 )
  {
    v11 = v2 - 9;
    if ( !v11 )
    {
      v9 = *(unsigned int *)(a2 + 24);
      v10 = 1414876488LL;
      return HeapAlloc(a1, v10, v9);
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v9 = *(unsigned int *)(a2 + 24);
      v10 = 1196576584LL;
      return HeapAlloc(a1, v10, v9);
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v9 = *(unsigned int *)(a2 + 24);
      v10 = 1397903432LL;
      return HeapAlloc(a1, v10, v9);
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v9 = *(unsigned int *)(a2 + 24);
      v10 = 1330794568LL;
      return HeapAlloc(a1, v10, v9);
    }
    if ( v14 == 2 )
    {
      v9 = *(unsigned int *)(a2 + 24);
      v10 = 1145455176LL;
      return HeapAlloc(a1, v10, v9);
    }
    goto LABEL_30;
  }
  if ( v2 == 8 )
  {
    v9 = *(unsigned int *)(a2 + 24);
    v10 = 1413827912LL;
    return HeapAlloc(a1, v10, v9);
  }
  v5 = v2 - 2;
  if ( !v5 )
  {
    v9 = *(unsigned int *)(a2 + 24);
    v10 = 1381258056LL;
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = *(unsigned int *)(a2 + 24);
    v10 = 1179992648LL;
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = *(unsigned int *)(a2 + 24);
    v10 = 1196118088LL;
LABEL_13:
    a1 = gpheapGlobal;
    return HeapAlloc(a1, v10, v9);
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *(unsigned int *)(a2 + 24);
    v10 = 1430537800LL;
    return HeapAlloc(a1, v10, v9);
  }
  if ( v8 == 2 )
  {
    v9 = *(unsigned int *)(a2 + 24);
    v10 = 1314276680LL;
    return HeapAlloc(a1, v10, v9);
  }
LABEL_30:
  LogError(3222536195LL);
  AcpiDiagTraceAmlError(0LL, -1072431101);
  ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
  PrintDebugMessage(112, ObjectTypeName, 0, 0, 0LL);
  return v3;
}
