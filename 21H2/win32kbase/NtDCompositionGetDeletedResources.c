/*
 * XREFs of NtDCompositionGetDeletedResources @ 0x1C000DE60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0010268 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall NtDCompositionGetDeletedResources(unsigned int a1, unsigned int a2, void *a3, unsigned int *a4)
{
  unsigned int *v4; // r15
  __int64 v6; // r13
  int v8; // edi
  struct DirectComposition::CApplicationChannel *v9; // rsi
  unsigned int v10; // r14d
  unsigned int v11; // ebx
  unsigned __int64 v12; // rdx
  _BYTE *v13; // r15
  unsigned int v14; // ecx
  __int64 v15; // rbx
  ULONG64 v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-A8h]
  struct DirectComposition::CApplicationChannel *v19; // [rsp+28h] [rbp-A0h] BYREF
  unsigned int *v20; // [rsp+30h] [rbp-98h]
  _BYTE Src[64]; // [rsp+40h] [rbp-88h] BYREF

  v4 = a4;
  v20 = a4;
  v6 = a2;
  v8 = 0;
  v19 = 0LL;
  memset(Src, 0, sizeof(Src));
  if ( (unsigned int)(v6 - 1) > 7 || !a3 || !v4 )
    v8 = -1073741811;
  if ( v8 >= 0 )
  {
    v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v19);
    v9 = v19;
    if ( v8 >= 0 )
    {
      v10 = v6;
      if ( *((_DWORD *)v19 + 129) < (unsigned int)v6 )
        v10 = *((_DWORD *)v19 + 129);
      v11 = v10;
      v18 = v10;
      if ( v10 )
      {
        LODWORD(v12) = *((_DWORD *)v19 + 128);
        v13 = Src;
        do
        {
          v14 = *((_DWORD *)v9 + 124) - v12;
          v15 = v10;
          if ( v10 >= v14 )
            v15 = v14;
          memmove(
            v13,
            (const void *)(*((_QWORD *)v9 + 59) + (unsigned int)v12 * *((_QWORD *)v9 + 63)),
            *((_QWORD *)v9 + 63) * (unsigned int)v15);
          v12 = (unsigned __int64)(unsigned int)(v15 + *((_DWORD *)v9 + 128)) % *((_QWORD *)v9 + 62);
          *((_DWORD *)v9 + 128) = v12;
          *((_DWORD *)v9 + 129) -= v15;
          v13 += 8 * v15;
          v10 -= v15;
        }
        while ( v10 );
        v4 = v20;
        v11 = v18;
      }
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v9)(v9);
      v16 = (ULONG64)a3 + 8 * v6;
      if ( v16 > MmUserProbeAddress || v16 <= (unsigned __int64)a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a3, Src, 8 * v6);
      if ( v4 + 1 < v4 || (unsigned __int64)(v4 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v4 = v11;
    }
  }
  return (unsigned int)v8;
}
