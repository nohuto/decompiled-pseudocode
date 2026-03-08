/*
 * XREFs of ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x18009419C
 * Callers:
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ @ 0x180094040 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180060AB0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListWorker(
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a1)
{
  unsigned int i; // ebp
  __int64 v3; // rcx
  CBrushDrawListGenerator *v4; // rcx
  int DrawListPrimitive; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebp
  int v9; // edi
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // ecx

  for ( i = *((_DWORD *)a1 + 32); i < *((_DWORD *)a1 + 44); ++i )
  {
    v3 = *((_QWORD *)a1 + i + 17);
    if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, 3LL) )
      break;
  }
  v4 = *(CBrushDrawListGenerator **)a1;
  if ( i == *((_DWORD *)a1 + 44) )
  {
    DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(v4, a1);
    v7 = DrawListPrimitive;
    if ( DrawListPrimitive < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, DrawListPrimitive, 0x166u, 0LL);
      return v7;
    }
  }
  else
  {
    v9 = *((_DWORD *)a1 + 32);
    v10 = *((_QWORD *)a1 + i + 17);
    *((_DWORD *)a1 + 32) = i;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 (__fastcall *)(__int64 *, __int64), struct CBrushDrawListGenerator::GenerateDrawListParameters *))(*(_QWORD *)v10 + 32LL))(
            v10,
            *(_QWORD *)v4,
            lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_,
            a1);
    *((_QWORD *)a1 + i + 17) = v10;
    v7 = v11;
    *((_DWORD *)a1 + 32) = v9;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1A6u, 0LL);
      return v7;
    }
  }
  return 0;
}
