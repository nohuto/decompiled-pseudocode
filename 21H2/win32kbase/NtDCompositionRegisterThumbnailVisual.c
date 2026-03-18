/*
 * XREFs of NtDCompositionRegisterThumbnailVisual @ 0x1C0006AA0
 * Callers:
 *     <none>
 * Callees:
 *     GreLockDwmState @ 0x1C0030A10 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0030A50 (GreUnlockDwmState.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C00908E0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C0090B20 (UserReferenceDwmApiPort.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0093F84 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionRegisterThumbnailVisual(
        void *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        unsigned __int64 a8,
        void *a9)
{
  char v9; // r15
  __int64 *v11; // rbx
  int v12; // esi
  int v13; // edi
  __int64 v14; // rbx
  __int128 *v15; // rcx
  __int128 *v16; // rcx
  CompositionObject *v17; // r14
  PVOID v18; // r12
  int v19; // edi
  unsigned int v20; // r15d
  __int64 v21; // rcx
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h]
  __int64 v25; // [rsp+60h] [rbp-A8h]
  __int64 v26; // [rsp+68h] [rbp-A0h]
  void *v27; // [rsp+70h] [rbp-98h]
  __int128 v28; // [rsp+78h] [rbp-90h]
  __int128 v29; // [rsp+88h] [rbp-80h]
  _DWORD v30[12]; // [rsp+98h] [rbp-70h] BYREF

  v9 = a3;
  v25 = a2;
  Object = a1;
  v26 = a2;
  v11 = (__int64 *)a8;
  v27 = a9;
  v12 = 0;
  v13 = 0;
  v24 = 0LL;
  memset(v30, 0, 45);
  if ( a8 + 8 < a8 || a8 + 8 > MmUserProbeAddress )
    v11 = (__int64 *)MmUserProbeAddress;
  v14 = *v11;
  v24 = v14;
  v30[0] = a4;
  v15 = (__int128 *)a5;
  if ( a5 + 16 < a5 || a5 + 16 > MmUserProbeAddress )
    v15 = (__int128 *)MmUserProbeAddress;
  v28 = *v15;
  *(_OWORD *)&v30[1] = v28;
  v16 = (__int128 *)a6;
  if ( a6 + 16 < a6 || a6 + 16 > MmUserProbeAddress )
    v16 = (__int128 *)MmUserProbeAddress;
  v29 = *v16;
  *(_OWORD *)&v30[5] = v29;
  LOBYTE(v30[9]) = a7;
  *(_DWORD *)((char *)&v30[9] + 1) = (a3 >> 2) & 1;
  *(_DWORD *)((char *)&v30[10] + 1) = (a3 >> 3) & 1;
  if ( (v30[0] & 9) != 9
    || (v30[0] & 2) != 0 && (v30[7] < v30[5] || v30[8] < v30[6])
    || v30[3] < v30[1]
    || v30[4] < v30[2]
    || *(_QWORD *)&v30[1]
    || (_WORD)a1 == (_WORD)a2 )
  {
    v13 = -1073741811;
  }
  if ( v13 >= 0 )
  {
    Object = 0LL;
    v13 = DirectComposition::ResourceObject::ResolveHandle(
            a9,
            1u,
            1,
            (struct DirectComposition::ResourceObject **)&Object);
    if ( v13 >= 0 )
    {
      v17 = (CompositionObject *)Object;
      if ( *((_DWORD *)Object + 9) == 195 )
      {
        GreLockDwmState();
        Object = 0LL;
        v13 = CompositionObject::OpenDwmHandle(v17, &Object);
        if ( v13 >= 0 )
        {
          v18 = Object;
          v19 = v9 & 2;
          v20 = v9 & 1;
          v21 = UserReferenceDwmApiPort();
          if ( qword_1C029B830 )
          {
            LOBYTE(v12) = v19 != 0;
            v13 = qword_1C029B830(v21, a1, v25, v20, v12, v30, v14, v18);
          }
          else
          {
            v13 = -1073741637;
          }
        }
        GreUnlockDwmState();
      }
      else
      {
        v13 = -1073741811;
      }
      ObfDereferenceObject(v17);
    }
  }
  return (unsigned int)v13;
}
