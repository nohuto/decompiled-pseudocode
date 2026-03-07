void __fastcall VIDMM_WORKER_THREAD::SetTimeout(__int64 a1, __int64 a2, int a3)
{
  if ( a2 > *(_QWORD *)(a1 + 192) )
  {
    *(_QWORD *)(a1 + 192) = a2;
    *(_DWORD *)(a1 + 200) = a3;
  }
}
