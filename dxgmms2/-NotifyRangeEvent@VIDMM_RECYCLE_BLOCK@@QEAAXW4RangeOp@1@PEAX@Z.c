__int64 __fastcall VIDMM_RECYCLE_BLOCK::NotifyRangeEvent(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax

  v5 = *(_QWORD **)(a1 + 136);
  if ( v5 )
  {
    v6 = *v5 + 144LL * v5[1];
    *(_QWORD *)(v6 + 8) = a3;
    *(_DWORD *)v6 = a2;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v6 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL);
    v7 = *(_QWORD *)(a1 + 136);
    result = *(_QWORD *)(v7 + 48);
    if ( *(_QWORD *)(v7 + 8) == result )
    {
      *(_QWORD *)(v7 + 8) = 0LL;
      result = *(_QWORD *)(a1 + 136);
      *(_BYTE *)(result + 16) = 1;
    }
  }
  return result;
}
