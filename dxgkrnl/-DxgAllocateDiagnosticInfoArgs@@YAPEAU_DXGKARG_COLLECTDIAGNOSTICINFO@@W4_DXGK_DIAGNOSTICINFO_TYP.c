/*
 * XREFs of ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C02C9034
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C01F38A0 (DpiAddDevice.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C030302C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DxgAllocateDiagnosticInfoArgs(int a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax

  v2 = operator new[](0xE8uLL, 0x4B677844u, 256LL);
  if ( !v2 )
    goto LABEL_9;
  if ( a1 == 1 || a1 == 2 || (v3 = 0x100000, a1 != 3) )
    v3 = 0x80000;
  v4 = operator new[](v3, 0x4B677844u, 256LL);
  *(_QWORD *)(v2 + 224) = v4;
  if ( !v4 )
  {
    operator delete((void *)v2);
    v2 = 0LL;
LABEL_9:
    WdLogSingleEntry1(6LL, 11153LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating DxgAllocateDiagnosticInfoArgs",
      11153LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v2;
  }
  *(_DWORD *)(v2 + 220) = 0;
  *(_DWORD *)(v2 + 216) = v3;
  *(_DWORD *)(v2 + 8) = a1;
  return v2;
}
