/*
 * XREFs of ?HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z @ 0x180011FF8
 * Callers:
 *     HamQueryApplicationUsageInfo @ 0x180011000 (HamQueryApplicationUsageInfo.c)
 *     HamQueryPackageUsageInfo @ 0x180011160 (HamQueryPackageUsageInfo.c)
 * Callees:
 *     ?HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z @ 0x180011FA4 (-HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z.c)
 */

__int64 __fastcall HampSystemOpenAppRegistryKey(const unsigned __int16 *a1, void *a2, unsigned int a3, HKEY *a4)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  int LastError; // ebx
  unsigned __int16 *Heap; // rax
  unsigned __int16 *v9; // rsi
  __int64 v10; // r9
  HKEY v11; // rax
  HKEY hKey; // [rsp+30h] [rbp-10h] BYREF
  HKEY v14; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+30h] BYREF

  v15 = a3;
  v14 = 0LL;
  hKey = 0LL;
  v5 = OpenStateExplicitForUserSid(a2, a1);
  v6 = v5;
  if ( v5 )
  {
    v15 = 0;
    GetSystemAppDataKey(v5, 0LL, 0LL, &v15);
    Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 2LL * v15);
    v9 = Heap;
    if ( Heap )
    {
      if ( (unsigned int)GetSystemAppDataKey(v6, &v14, Heap, &v15) )
      {
        LastError = HampSystemCreateKey(v14, v9, 0, v10, &hKey);
        if ( LastError >= 0 )
        {
          v11 = hKey;
          hKey = 0LL;
          LastError = 0;
          *a4 = v11;
        }
      }
      else if ( (int)GetLastError() > 0 )
      {
        LastError = (unsigned __int16)GetLastError() | 0xC0070000;
      }
      else
      {
        LastError = GetLastError();
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    }
    else
    {
      LastError = -1073741801;
    }
  }
  else if ( (int)GetLastError() > 0 )
  {
    LastError = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    LastError = GetLastError();
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( v14 )
    RegCloseKey(v14);
  if ( v6 )
    CloseState(v6);
  return (unsigned int)LastError;
}
