/*
 * XREFs of RtlpLookupUserFunctionTable @ 0x14039DB7C
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140281490 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     RtlCaptureImageExceptionValues @ 0x1402B274C (RtlCaptureImageExceptionValues.c)
 *     RtlpLookupUserFunctionTableInverted @ 0x14039DBC0 (RtlpLookupUserFunctionTableInverted.c)
 *     RtlpLookupDynamicUserFunctionTable @ 0x1405AFF68 (RtlpLookupDynamicUserFunctionTable.c)
 *     MmGetImageInformation @ 0x14077582C (MmGetImageInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpLookupUserFunctionTable(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[6]; // [rsp+28h] [rbp-30h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v4 = RtlpLookupUserFunctionTableInverted();
  if ( !v4 )
  {
    v4 = RtlpLookupDynamicUserFunctionTable(a1, a2);
    v14 = v4;
    if ( !v4 )
    {
      v11 = 0LL;
      v12[0] = 0LL;
      v13 = 0;
      if ( (int)MmGetImageInformation(a1, &v11, v12, &v13) >= 0 )
      {
        v6 = v11;
        RtlCaptureImageExceptionValues(v11, (__int64 *)&v14, (_DWORD *)(a2 + 20));
        v4 = v14;
        if ( v14 )
        {
          v8 = *(_DWORD *)(a2 + 20);
          if ( v8 && (v9 = v8, v8 == 12 * (v8 / 0xCuLL)) )
          {
            if ( (v14 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v10 = v8 + v14;
            if ( v9 + v14 > 0x7FFFFFFF0000LL || v10 < v14 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          else
          {
            v4 = 0LL;
            v14 = 0LL;
          }
        }
        v7 = v12[0];
      }
      else
      {
        v6 = 0LL;
        v7 = 0;
      }
      *(_QWORD *)(a2 + 8) = v6;
      *(_DWORD *)(a2 + 16) = v7;
      *(_QWORD *)a2 = v4;
      if ( !v4 )
        *(_DWORD *)(a2 + 20) = 0;
    }
  }
  return v4;
}
