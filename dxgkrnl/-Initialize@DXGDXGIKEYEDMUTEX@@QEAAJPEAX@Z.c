/*
 * XREFs of ?Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z @ 0x1C0327C5C
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C032D884 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::Initialize(DXGDXGIKEYEDMUTEX *this, void *a2)
{
  NTSTATUS v4; // eax
  _QWORD *v5; // rcx
  unsigned int v6; // esi
  _QWORD *v8; // [rsp+70h] [rbp+8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v9; // [rsp+80h] [rbp+18h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v4 = ObReferenceObjectByHandle(a2, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, (PVOID *)&v8, &v9);
  v5 = v8;
  v6 = v4;
  *(_QWORD *)this = v8;
  if ( v4 >= 0 )
  {
    if ( v5[3] && v5[4] )
    {
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, a2);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Handle 0x%I64x doesn't have keyed mutex or sync object",
        (__int64)a2,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference handle 0x%I64x",
      (__int64)a2,
      0LL,
      0LL,
      0LL,
      0LL);
    return v6;
  }
}
