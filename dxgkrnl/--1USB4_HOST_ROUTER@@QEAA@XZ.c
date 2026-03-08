/*
 * XREFs of ??1USB4_HOST_ROUTER@@QEAA@XZ @ 0x1C006BDD8
 * Callers:
 *     ??_GUSB4_HOST_ROUTER@@QEAAPEAXI@Z @ 0x1C006BDF8 (--_GUSB4_HOST_ROUTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall USB4_HOST_ROUTER::~USB4_HOST_ROUTER(struct _UNICODE_STRING *this)
{
  RtlFreeUnicodeString(this + 1);
}
