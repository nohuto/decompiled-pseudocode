/*
 * XREFs of WPP_RECORDER_SF_Zd @ 0x1C00AC000
 * Callers:
 *     ndisAoAcTraceRundown @ 0x1C00AB54C (ndisAoAcTraceRundown.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C0126CCC (-ReferenceWdi@@YA_NXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00ABD54 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Zd(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        unsigned __int16 *a6,
        ...)
{
  unsigned __int64 v8; // rdi
  unsigned int v10; // r14d
  const wchar_t *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  const wchar_t *v14; // rax
  const wchar_t *v15; // r8
  bool v16; // zf
  int v18; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va, a6);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = a2;
  v11 = a6;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v12, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v8 + 41) >= a2 )
  {
    if ( a6 )
      v13 = *a6;
    else
      v13 = 8LL;
    if ( a6 && *a6 )
      v14 = (const wchar_t *)*((_QWORD *)a6 + 1);
    else
      v14 = L"NULL";
    v15 = a6;
    if ( !a6 )
      v15 = L"\b";
    ndisWppFastTraceMessage(a5, a4, v15, 2LL, v14, v13, va, 4LL, 0LL);
  }
  v16 = a6 == 0LL;
  if ( a6 )
    v16 = 0;
  if ( v16 )
    v11 = L"\b";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v18, v11);
}
