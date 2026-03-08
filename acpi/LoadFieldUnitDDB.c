/*
 * XREFs of LoadFieldUnitDDB @ 0x1C004FB68
 * Callers:
 *     Load @ 0x1C00556C0 (Load.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ReadObject @ 0x1C0005BEE (ReadObject.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 *     LoadDDB @ 0x1C004FA40 (LoadDDB.c)
 */

__int64 __fastcall LoadFieldUnitDDB(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int Object; // eax
  unsigned int DDB; // ebx
  __int64 v8; // rax
  const char *v9; // rdi
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  const void *v13; // r14
  const void *v14; // rdx
  int v15; // ecx
  __int128 v17; // [rsp+30h] [rbp-29h] BYREF
  __int128 v18; // [rsp+40h] [rbp-19h]
  __int128 *v19; // [rsp+50h] [rbp-9h]
  __int128 v20; // [rsp+58h] [rbp-1h] BYREF
  __int128 v21; // [rsp+68h] [rbp+Fh]
  int v22; // [rsp+78h] [rbp+1Fh]

  v22 = 0;
  v17 = 0LL;
  WORD1(v17) = 3;
  v18 = 0LL;
  v19 = &v20;
  v20 = 0LL;
  DWORD2(v18) = 36;
  v21 = 0LL;
  Object = ReadObject((__int64)a1, a2, (__int64)&v17);
  DDB = Object;
  if ( !Object )
  {
    v8 = HeapAlloc(gpheapGlobal, 1179992648, DWORD1(v20));
    v9 = (const char *)v8;
    if ( !v8 )
    {
      DDB = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError((__int64)a1, -1073741670);
      v10 = 82;
LABEL_15:
      PrintDebugMessage(v10, 0LL, 0LL, 0LL, 0LL);
      return DDB;
    }
    *(_OWORD *)v8 = v20;
    *(_OWORD *)(v8 + 16) = v21;
    *(_DWORD *)(v8 + 32) = v22;
    DWORD2(v18) = DWORD1(v20) - 36;
    v19 = (__int128 *)(v8 + 36);
    v11 = ReadObject((__int64)a1, a2, (__int64)&v17);
    DDB = v11;
    if ( v11 )
    {
      if ( v11 == 32772 )
      {
        DDB = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError((__int64)a1, -1072431098);
        v14 = 0LL;
        v15 = 83;
        goto LABEL_11;
      }
    }
    else
    {
      if ( ghValidateTable )
      {
        v12 = ghValidateTable(v9, qword_1C0070290);
        v13 = (const void *)v12;
        if ( v12 )
        {
          DDB = -1072431079;
          LogError(-1072431079);
          AcpiDiagTraceAmlError((__int64)a1, -1072431079);
          v14 = v13;
          v15 = 84;
LABEL_11:
          PrintDebugMessage(v15, v14, 0LL, 0LL, 0LL);
          goto LABEL_12;
        }
      }
      DDB = LoadDDB(a1, v9, a1[10], a3);
    }
LABEL_12:
    HeapFree((__int64)v9);
    return DDB;
  }
  if ( Object == 32772 )
  {
    DDB = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)a1, -1072431098);
    v10 = 83;
    goto LABEL_15;
  }
  return DDB;
}
