/*
 * XREFs of ?RemoveHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C03C6210
 * Callers:
 *     ?_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR@@CAJPEAX0@Z @ 0x1C03C6CA0 (-_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR@@CAJPEAX0@Z.c)
 * Callees:
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??_GUSB4_HOST_ROUTER@@QEAAPEAXI@Z @ 0x1C006BDF8 (--_GUSB4_HOST_ROUTER@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall USB4_HOSTROUTER_MGR::RemoveHostRouter(USB4_HOSTROUTER_MGR *this, const struct _UNICODE_STRING *a2)
{
  struct _UNICODE_STRING **v3; // rsi
  struct _UNICODE_STRING *v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // rcx
  wchar_t *Buffer; // rax
  DXGFASTMUTEX *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _UNICODE_STRING **)((char *)this + 56);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v9, (USB4_HOSTROUTER_MGR *)((char *)this + 8));
  v4 = *v3;
  if ( *v3 == (struct _UNICODE_STRING *)v3 )
    goto LABEL_5;
  v5 = 0;
  while ( !RtlEqualUnicodeString(a2, v4 + 1, 0) )
  {
    v4 = *(struct _UNICODE_STRING **)&v4->Length;
    if ( v4 == (struct _UNICODE_STRING *)v3 )
      goto LABEL_5;
  }
  if ( !v4 )
  {
LABEL_5:
    WdLogSingleEntry0(2LL);
    v5 = -1073741275;
  }
  else
  {
    v7 = *(_QWORD *)&v4->Length;
    if ( *(struct _UNICODE_STRING **)(*(_QWORD *)&v4->Length + 8LL) != v4
      || (Buffer = v4->Buffer, *(struct _UNICODE_STRING **)Buffer != v4) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)Buffer = v7;
    *(_QWORD *)(v7 + 8) = Buffer;
    USB4_HOST_ROUTER::`scalar deleting destructor'(v4);
  }
  MUTEX_LOCK::~MUTEX_LOCK(&v9);
  return v5;
}
