/*
 * XREFs of ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0092EA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C002A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C0060F10 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C01D4C34 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetReferenceArrayProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  int WeakReferenceBase; // edi
  void *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v14; // r14

  WeakReferenceBase = 0;
  *a6 = 0;
  if ( a3 != 20 || !a4 )
    return (unsigned int)-1073741811;
  if ( *((_QWORD *)this + 24) )
    return (unsigned int)-1073741790;
  v10 = Win32AllocPoolWithQuotaZInit(8 * a5, 0x72774344u);
  *((_QWORD *)this + 24) = v10;
  if ( v10 )
  {
    v11 = 0LL;
    if ( !a5 )
    {
LABEL_10:
      *((_DWORD *)this + 50) = a5;
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x400u;
      Win32FreePool((__int64)a4);
      return (unsigned int)WeakReferenceBase;
    }
    v12 = 0LL;
    while ( 1 )
    {
      WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(
                            a2,
                            a4[v12],
                            (struct DirectComposition::CWeakReferenceBase **)(*((_QWORD *)this + 24) + 8 * v12));
      if ( WeakReferenceBase < 0 )
        break;
      v11 = (unsigned int)(v11 + 1);
      v12 = (unsigned int)v11;
      if ( (unsigned int)v11 >= a5 )
        goto LABEL_9;
    }
    if ( (_DWORD)v11 )
    {
      v14 = 0LL;
      do
      {
        DirectComposition::CApplicationChannel::ReleaseWeakReference(
          a2,
          *(struct DirectComposition::CWeakReferenceBase **)(v14 + *((_QWORD *)this + 24)));
        v14 += 8LL;
        --v11;
      }
      while ( v11 );
    }
    Win32FreePool(*((_QWORD *)this + 24));
    *((_QWORD *)this + 24) = 0LL;
  }
  else
  {
    WeakReferenceBase = -1073741801;
  }
LABEL_9:
  if ( WeakReferenceBase >= 0 )
    goto LABEL_10;
  return (unsigned int)WeakReferenceBase;
}
