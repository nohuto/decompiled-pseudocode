/*
 * XREFs of IopRetrieveTransactionParameters @ 0x140756C40
 * Callers:
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x1407BA090 (IopAllocRealFileObject.c)
 * Callees:
 *     IopGetSetSpecificExtension @ 0x14023EA58 (IopGetSetSpecificExtension.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IopCheckStackForTransactionSupport @ 0x1403D09F0 (IopCheckStackForTransactionSupport.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopRetrieveTransactionParameters(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  int SetSpecificExtension; // edi
  struct _KTHREAD *CurrentThread; // rcx
  _WORD *Teb; // rax
  _WORD *v12; // rcx
  __int16 v13; // [rsp+30h] [rbp-58h]
  int v14; // [rsp+34h] [rbp-54h]
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  _WORD *v17; // [rsp+48h] [rbp-40h] BYREF

  v17 = 0LL;
  Handle = 0LL;
  v13 = 0;
  result = TmCurrentTransaction(&Handle);
  SetSpecificExtension = result;
  v14 = result;
  if ( (_DWORD)result == -1073741637 )
  {
    SetSpecificExtension = 0;
    v14 = 0;
  }
  else if ( (int)result < 0 )
  {
    return result;
  }
  if ( Handle )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0
      || CurrentThread->ApcStateIndex == 1
      || (Teb = CurrentThread->Teb) == 0LL )
    {
      SetSpecificExtension = -1072103400;
    }
    else
    {
      v13 = Teb[372];
      SetSpecificExtension = v14;
    }
  }
  if ( SetSpecificExtension < 0 || !Handle )
    return (unsigned int)SetSpecificExtension;
  if ( IopCheckStackForTransactionSupport(a1)
    || (*(_WORD *)(a2 + 70) &= 1u, *(_DWORD *)(a2 + 88) == 1) && (a3 & 0xFEEDFF56) == 0
    || *(_BYTE *)(a2 + 137) )
  {
    Object = 0LL;
    if ( ObReferenceObjectByHandle(Handle, 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 1, &Object, 0LL) < 0 )
    {
      return (unsigned int)-1072103400;
    }
    else
    {
      SetSpecificExtension = IopGetSetSpecificExtension(a4, 0, 0x10u, 1, &v17, 0LL);
      if ( SetSpecificExtension >= 0 )
      {
        v12 = v17;
        *v17 = 16;
        v12[1] = v13;
        *((_QWORD *)v12 + 1) = Object;
        return (unsigned int)SetSpecificExtension;
      }
      ObfDereferenceObject(Object);
    }
    return (unsigned int)SetSpecificExtension;
  }
  return 3222863935LL;
}
