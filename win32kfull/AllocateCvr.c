__int64 __fastcall AllocateCvr(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 result; // rax

  if ( a2 <= 0 || (unsigned int)a2 > 0xC30C30 )
    return 0LL;
  v4 = 168LL * (unsigned int)a2;
  v5 = a1 == gSMWP ? Win32AllocPoolZInit(v4, 2004054869LL) : Win32AllocPoolWithQuotaZInit(v4, 2004054869LL);
  if ( !v5 )
    return 0LL;
  *(_DWORD *)(a1 + 24) &= ~4u;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 40) = v5;
  result = 1LL;
  *(_DWORD *)(a1 + 32) = a2;
  return result;
}
