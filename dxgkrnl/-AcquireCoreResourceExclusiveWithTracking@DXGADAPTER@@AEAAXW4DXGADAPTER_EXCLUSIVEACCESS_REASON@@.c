__int64 __fastcall DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  _BYTE v7[400]; // [rsp+20h] [rbp-198h] BYREF

  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 168), 0) )
  {
    DXGDEADLOCK_TRACKER::DXGDEADLOCK_TRACKER((DXGDEADLOCK_TRACKER *)v7, (struct DXGADAPTER *)a1, a3);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 168), 1u);
    DXGDEADLOCK_TRACKER::~DXGDEADLOCK_TRACKER((DXGDEADLOCK_TRACKER *)v7);
  }
  *(_DWORD *)(a1 + 4676) = a2;
  result = DXGGLOBAL::GetFirstProfilerInterface();
  *(_DWORD *)(a1 + 4680) = result;
  return result;
}
