/*
 * XREFs of NtGetCachedSigningLevel @ 0x140778700
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SeGetCachedSigningLevel @ 0x1407789A0 (SeGetCachedSigningLevel.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 */

__int64 __fastcall NtGetCachedSigningLevel(
        void *a1,
        volatile void *a2,
        volatile void *a3,
        volatile void *a4,
        unsigned int *a5,
        volatile void *a6)
{
  PVOID v10; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS v12; // ebx
  int CachedSigningLevel; // r14d
  _DWORD *v15; // rbx
  char v16; // cl
  unsigned int v17; // r14d
  void *v18; // rbx
  _DWORD *v19; // r14
  char v20; // [rsp+30h] [rbp-D8h] BYREF
  int v21; // [rsp+34h] [rbp-D4h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C8h] BYREF
  int v24; // [rsp+48h] [rbp-C0h]
  HANDLE Handle; // [rsp+50h] [rbp-B8h]
  volatile void *Address; // [rsp+58h] [rbp-B0h]
  volatile void *v27; // [rsp+60h] [rbp-A8h]
  volatile void *v28; // [rsp+68h] [rbp-A0h]
  volatile void *v29; // [rsp+70h] [rbp-98h]
  _BYTE Src[64]; // [rsp+80h] [rbp-88h] BYREF

  v28 = a4;
  v27 = a3;
  Address = a2;
  Handle = a1;
  v29 = a6;
  v10 = 0LL;
  memset(Src, 0, sizeof(Src));
  Length = 64LL;
  v21 = 0;
  v20 = 0;
  if ( a1 && a2 && a3 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
    v10 = Object;
    Handle = Object;
    if ( v12 >= 0 )
    {
      CachedSigningLevel = SeGetCachedSigningLevel(
                             (_DWORD)Object,
                             (unsigned int)&v21,
                             (unsigned int)&v20,
                             (unsigned __int64)Src & -(__int64)(a4 != 0LL),
                             (unsigned __int64)&Length & -(__int64)(a4 != 0LL),
                             ((unsigned __int64)&Length + 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a4 >> 64));
      LODWORD(Object) = CachedSigningLevel;
      v12 = CachedSigningLevel;
      if ( CachedSigningLevel >= 0 )
      {
        v15 = Address;
        if ( PreviousMode == 1 )
        {
          ProbeForWrite(Address, 4uLL, 4u);
          ProbeForWrite(v27, 1uLL, 1u);
        }
        v16 = v21;
        *v15 = v21;
        *(_BYTE *)v27 = v20;
        v12 = CachedSigningLevel;
        if ( a5 )
        {
          if ( PreviousMode == 1 )
          {
            ProbeForWrite(a5, 4uLL, 4u);
            v16 = v21;
          }
          if ( (v16 & 2) != 0 )
          {
            v17 = Length;
            if ( *a5 >= (unsigned int)Length && (v18 = (void *)v28) != 0LL )
            {
              if ( PreviousMode == 1 )
              {
                ProbeForWrite(v28, (unsigned int)Length, 1u);
                v17 = Length;
              }
              memmove(v18, Src, v17);
              v12 = (int)Object;
            }
            else
            {
              v12 = -1073741789;
              v24 = -1073741789;
            }
            *a5 = v17;
            v19 = v29;
            if ( v29 )
            {
              if ( PreviousMode == 1 )
                ProbeForWrite(v29, 4uLL, 4u);
              *v19 = HIDWORD(Length);
            }
          }
          else
          {
            *a5 = 0;
            v12 = CachedSigningLevel;
          }
        }
      }
    }
  }
  else
  {
    v12 = -1073741811;
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)v12;
}
