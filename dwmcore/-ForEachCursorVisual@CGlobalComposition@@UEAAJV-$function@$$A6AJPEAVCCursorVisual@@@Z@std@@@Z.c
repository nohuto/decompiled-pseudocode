/*
 * XREFs of ?ForEachCursorVisual@CGlobalComposition@@UEAAJV?$function@$$A6AJPEAVCCursorVisual@@@Z@std@@@Z @ 0x1801EF6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalComposition::ForEachCursorVisual(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rsi
  __int64 *v4; // rbp
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 1360);
  v3 = a2;
  v4 = *(__int64 **)(a1 + 1368);
  v5 = 0;
  while ( v2 != v4 )
  {
    v6 = *(_QWORD *)(v3 + 56);
    v11 = *v2;
    if ( !v6 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      JUMPOUT(0x1801EF7A6LL);
    }
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 16LL))(v6, &v11);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x17Fu, 0LL);
      break;
    }
    ++v2;
  }
  v9 = *(_QWORD *)(v3 + 56);
  if ( v9 )
  {
    LOBYTE(a2) = v9 != v3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, a2);
    *(_QWORD *)(v3 + 56) = 0LL;
  }
  return v5;
}
