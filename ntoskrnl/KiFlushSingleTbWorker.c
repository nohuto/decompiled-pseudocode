/*
 * XREFs of KiFlushSingleTbWorker @ 0x1402EAF90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x140417710 (KiSetUserTbFlushPending.c)
 */

__int64 __fastcall KiFlushSingleTbWorker(__int64 a1)
{
  void *v1; // rbx
  __int64 result; // rax
  __int64 v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h]

  v1 = *(void **)a1;
  result = (unsigned int)(1 << *(_DWORD *)(a1 + 8));
  if ( (result & 0xA) != 0 )
  {
    if ( KiFlushPcid )
    {
      result = (__int64)KeGetCurrentThread();
      v3 = *(_QWORD *)(result + 184);
      if ( !*(_BYTE *)(v3 + 912) )
      {
        if ( (KiFlushPcid & 2) != 0 )
        {
          *(_QWORD *)&v4 = 1LL;
          *((_QWORD *)&v4 + 1) = v1;
          result = 0LL;
          __asm { invpcid eax, [rsp+48h+var_28] }
        }
        else
        {
          result = KiSetUserTbFlushPending(v3, 0LL, 1LL);
        }
      }
    }
  }
  __invlpg(v1);
  return result;
}
