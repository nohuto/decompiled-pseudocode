/*
 * XREFs of ??0VIDMM_PURGE_TELEMETRY@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x1C00BB5E8
 * Callers:
 *     ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00BAFF0 (--0VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

VIDMM_PURGE_TELEMETRY *__fastcall VIDMM_PURGE_TELEMETRY::VIDMM_PURGE_TELEMETRY(
        VIDMM_PURGE_TELEMETRY *this,
        struct VIDMM_GLOBAL *a2)
{
  char *v2; // rax
  __int64 v3; // rdx
  VIDMM_PURGE_TELEMETRY *result; // rax

  *(_QWORD *)this = a2;
  v2 = (char *)this + 16;
  *((_DWORD *)this + 783) = 1;
  *((_QWORD *)this + 389) = 0LL;
  *((_QWORD *)this + 390) = 0LL;
  *((_DWORD *)this + 782) = 0;
  v3 = 32LL;
  do
  {
    *((_QWORD *)v2 - 1) = 0LL;
    *((_DWORD *)v2 + 4) = 0;
    *(_QWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 127) = 0LL;
    *((_DWORD *)v2 + 260) = 0;
    *((_QWORD *)v2 + 128) = 0LL;
    *((_QWORD *)v2 + 255) = 0LL;
    *((_DWORD *)v2 + 516) = 0;
    *((_QWORD *)v2 + 256) = 0LL;
    v2 += 32;
    --v3;
  }
  while ( v3 );
  *((_QWORD *)this + 385) = 0LL;
  result = this;
  *((_DWORD *)this + 776) = 0;
  *((_QWORD *)this + 386) = 0LL;
  return result;
}
