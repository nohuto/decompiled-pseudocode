/*
 * XREFs of ?GetNextLegacyTokenBlock@CCompositionFrame@@UEAA_NPEAPEBEPEAI1@Z @ 0x1C0012940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionFrame::GetNextLegacyTokenBlock(
        CCompositionFrame *this,
        const unsigned __int8 **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  char v4; // r10
  __int64 v7; // rbx
  __int64 v8; // rcx

  v4 = 0;
  if ( *((_BYTE *)this + 120) )
  {
    v7 = *((_QWORD *)this + 14);
    *a2 = (const unsigned __int8 *)(*(_QWORD *)(v7 + 2088) + 20LL);
    *a3 = *(_DWORD *)(*(_QWORD *)(v7 + 2088) + 2068LL);
    *a4 = *(_DWORD *)(*(_QWORD *)(v7 + 2088) + 16LL);
    v8 = **(_QWORD **)(v7 + 2088);
    if ( v8 != v7 + 16 )
    {
      *(_QWORD *)(v7 + 2088) = v8;
      v4 = 1;
    }
    *((_BYTE *)this + 120) = v4;
  }
  else
  {
    *a2 = 0LL;
    *a3 = 0;
    *a4 = 0;
  }
  return *((_BYTE *)this + 120);
}
