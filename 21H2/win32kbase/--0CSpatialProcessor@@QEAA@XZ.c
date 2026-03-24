/*
 * XREFs of ??0CSpatialProcessor@@QEAA@XZ @ 0x1C008B2EC
 * Callers:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C0089EF4 (--0CTouchProcessor@@QEAA@XZ.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C008A75C (--0CMouseProcessor@@IEAA@XZ.c)
 * Callees:
 *     ApiSetEditionGetExecutionEvironment @ 0x1C00B389C (ApiSetEditionGetExecutionEvironment.c)
 */

CSpatialProcessor *__fastcall CSpatialProcessor::CSpatialProcessor(CSpatialProcessor *this)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_DWORD *)this + 3) = 1;
  *((_DWORD *)this + 2) = ApiSetEditionGetExecutionEvironment();
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
