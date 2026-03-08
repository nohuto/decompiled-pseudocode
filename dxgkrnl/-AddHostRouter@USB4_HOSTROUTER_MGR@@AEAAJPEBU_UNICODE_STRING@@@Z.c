/*
 * XREFs of ?AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C03C5960
 * Callers:
 *     ?_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR@@CAJPEAX0@Z @ 0x1C03C6CA0 (-_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR@@CAJPEAX0@Z.c)
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C000296C (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GUSB4_HOST_ROUTER@@QEAAPEAXI@Z @ 0x1C006BDF8 (--_GUSB4_HOST_ROUTER@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall USB4_HOSTROUTER_MGR::AddHostRouter(USB4_HOSTROUTER_MGR *this, const struct _UNICODE_STRING *a2)
{
  unsigned __int16 v4; // di
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  const unsigned __int16 *v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edi
  unsigned __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  DXGFASTMUTEX *v15; // [rsp+58h] [rbp+10h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v15, (USB4_HOSTROUTER_MGR *)((char *)this + 8));
  v4 = a2->Length + 2;
  v5 = operator new[](0x28uLL, 0x4D677844u, 256LL);
  v6 = v5;
  if ( !v5 )
  {
    v6 = 0LL;
    WdLogSingleEntry0(2LL);
LABEL_10:
    v12 = -1073741801;
    if ( v6 )
      USB4_HOST_ROUTER::`scalar deleting destructor'((struct _UNICODE_STRING *)v6);
    goto LABEL_12;
  }
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_WORD *)(v5 + 18) = v4;
  v7 = 2LL * v4;
  if ( !is_mul_ok(v4, 2uLL) )
    v7 = -1LL;
  *(_QWORD *)(v6 + 24) = operator new[](v7, 0x4D677844u, 256LL);
  *(_WORD *)(v6 + 16) = 0;
  if ( !*(_QWORD *)(v6 + 24) )
  {
    WdLogSingleEntry0(2LL);
    goto LABEL_10;
  }
  RtlCopyUnicodeString((PUNICODE_STRING)(v6 + 16), a2);
  v8 = *(unsigned __int16 *)(v6 + 18);
  v9 = *(const unsigned __int16 **)(v6 + 24);
  v14 = 0LL;
  RtlStringCchLengthW(v9, v8, &v14);
  *(_DWORD *)(v6 + 32) = _wtoi((const wchar_t *)(*(_QWORD *)(v6 + 24) + 2 * (v14 - 1)));
  v10 = (__int64 *)((char *)this + 56);
  v11 = *((_QWORD *)this + 7);
  if ( *(USB4_HOSTROUTER_MGR **)(v11 + 8) != (USB4_HOSTROUTER_MGR *)((char *)this + 56) )
    __fastfail(3u);
  *(_QWORD *)v6 = v11;
  v12 = 0;
  *(_QWORD *)(v6 + 8) = v10;
  *(_QWORD *)(v11 + 8) = v6;
  *v10 = v6;
LABEL_12:
  MUTEX_LOCK::~MUTEX_LOCK(&v15);
  return v12;
}
