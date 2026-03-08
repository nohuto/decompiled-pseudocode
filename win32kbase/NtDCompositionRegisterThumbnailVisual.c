/*
 * XREFs of NtDCompositionRegisterThumbnailVisual @ 0x1C0009AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0091610 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C00919E0 (UserReferenceDwmApiPort.c)
 *     GreLockDwmState @ 0x1C0091A70 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0091AF0 (GreUnlockDwmState.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00A7DB4 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
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
  int v12; // edi
  int v13; // esi
  __int64 v14; // rbx
  __int128 *v15; // rcx
  __int128 *v16; // rcx
  char v17; // al
  char v18; // al
  CompositionObject *v19; // r14
  PVOID v20; // r12
  int v21; // esi
  unsigned int v22; // r15d
  __int64 v23; // rcx
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h]
  __int64 v27; // [rsp+60h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-A0h]
  void *v29; // [rsp+70h] [rbp-98h]
  __int128 v30; // [rsp+78h] [rbp-90h]
  __int128 v31; // [rsp+88h] [rbp-80h]
  _DWORD v32[12]; // [rsp+98h] [rbp-70h] BYREF

  v9 = a3;
  v27 = a2;
  Object = a1;
  v28 = a2;
  v11 = (__int64 *)a8;
  v29 = a9;
  v12 = 0;
  v13 = 0;
  v26 = 0LL;
  memset(v32, 0, 45);
  if ( a8 + 8 < a8 || a8 + 8 > MmUserProbeAddress )
    v11 = (__int64 *)MmUserProbeAddress;
  v14 = *v11;
  v26 = v14;
  v32[0] = a4;
  v15 = (__int128 *)a5;
  if ( a5 + 16 < a5 || a5 + 16 > MmUserProbeAddress )
    v15 = (__int128 *)MmUserProbeAddress;
  v30 = *v15;
  *(_OWORD *)&v32[1] = v30;
  v16 = (__int128 *)a6;
  if ( a6 + 16 < a6 || a6 + 16 > MmUserProbeAddress )
    v16 = (__int128 *)MmUserProbeAddress;
  v31 = *v16;
  *(_OWORD *)&v32[5] = v31;
  LOBYTE(v32[9]) = a7;
  *(_DWORD *)((char *)&v32[9] + 1) = (a3 >> 2) & 1;
  *(_DWORD *)((char *)&v32[10] + 1) = (a3 >> 3) & 1;
  if ( (v32[0] & 9) != 9 )
    goto LABEL_32;
  if ( (v32[0] & 2) != 0 )
  {
    if ( v32[7] < v32[5] || (v17 = 1, v32[8] < v32[6]) )
      v17 = 0;
    if ( !v17 )
      goto LABEL_32;
  }
  if ( v32[3] < v32[1] || (v18 = 1, v32[4] < v32[2]) )
    v18 = 0;
  if ( !v18 || *(_QWORD *)&v32[1] || !(_WORD)a1 )
LABEL_32:
    v13 = -1073741811;
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
      v19 = (CompositionObject *)Object;
      if ( *((_DWORD *)Object + 9) == 196 )
      {
        GreLockDwmState();
        Object = 0LL;
        v13 = CompositionObject::OpenDwmHandle(v19, &Object);
        if ( v13 >= 0 )
        {
          v20 = Object;
          v21 = v9 & 2;
          v22 = v9 & 1;
          v23 = UserReferenceDwmApiPort();
          if ( qword_1C02D6038 )
          {
            LOBYTE(v12) = v21 != 0;
            v13 = qword_1C02D6038(v23, a1, v27, v22, v12, v32, v14, v20);
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
      ObfDereferenceObject(v19);
    }
  }
  return (unsigned int)v13;
}
