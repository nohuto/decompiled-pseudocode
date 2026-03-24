/*
 * XREFs of ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C0221578
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0189268 (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C018BAE0 (DpiAddDevice.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025FCF4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 */

_QWORD *__fastcall DxgAllocateDiagnosticInfoArgs(int a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  PVOID v9; // rax
  __int64 v10; // rax

  v2 = operator new[](0xE8uLL, 0x4B677844u, PagedPool);
  v7 = v2;
  if ( !v2 )
    goto LABEL_10;
  memset(v2, 0, 0xE8uLL);
  if ( a1 == 1 || a1 == 2 || (v8 = 0x100000, a1 != 3) )
    v8 = 0x80000;
  v9 = operator new[](v8, 0x4B677844u, PagedPool);
  v7[28] = v9;
  if ( v9 )
  {
    *((_DWORD *)v7 + 55) = 0;
    *((_DWORD *)v7 + 54) = v8;
    *((_DWORD *)v7 + 2) = a1;
    memset(v9, 0, v8);
  }
  else
  {
    operator delete(v7);
    v7 = 0LL;
  }
  if ( !v7 )
  {
LABEL_10:
    v10 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    *(_QWORD *)(v10 + 24) = 10802LL;
    WdLogEvent5_WdLowResource(v10);
  }
  return v7;
}
