/*
 * XREFs of ?GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z @ 0x1C0132DF4
 * Callers:
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C0132D70 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C0132E78 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUMDFileName(
        ADAPTER_RENDER *this,
        __int64 a2,
        struct _UNICODE_STRING *a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // cl
  struct _UNICODE_STRING v12; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 4 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v14 + 24) = 3154LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DXGPROCESS::GetCurrent((__int64)this, a2, (__int64)a3, a4) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v15 + 24) = 3155LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v11 = *((_BYTE *)DXGPROCESS::GetCurrent(v8, v7, v9, v10) + 347);
  if ( (v11 & 1) != 0 )
  {
    v12 = *(struct _UNICODE_STRING *)((char *)this + 16 * v4 + 376);
    goto LABEL_8;
  }
  if ( (v11 & 6) == 0 )
  {
    v12 = *(struct _UNICODE_STRING *)((char *)this + 16 * v4 + 312);
LABEL_8:
    *a3 = v12;
    return 0LL;
  }
  if ( (_DWORD)v4 == 3 )
  {
    v12 = *(struct _UNICODE_STRING *)((char *)this + 472);
    goto LABEL_8;
  }
  return 3221225485LL;
}
