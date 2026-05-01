/*
 * XREFs of CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___ @ 0x18000E870
 * Callers:
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x18000DFB0 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?IsEqualByProxy@CApplicationFrameWrapper@@UEAA_NPEAUIApplicationFrameProxy@@@Z @ 0x180040920 (-IsEqualByProxy@CApplicationFrameWrapper@@UEAA_NPEAUIApplicationFrameProxy@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B05E0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___(
        _QWORD *a1,
        struct IUnknown *a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // rdi
  int v7; // r10d
  __int64 v8; // r11
  __int64 v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  unsigned __int64 i; // rdi
  __int64 v13; // r11
  __int64 v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt

  *a3 = 0LL;
  v4 = 0LL;
  v7 = -2147023728;
  do
  {
    if ( v4 >= a1[18] )
      break;
    if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1[17] + 8 * v4), a2) )
    {
      v8 = a1[17];
      v7 = 0;
      v9 = *(_QWORD *)(v8 + 8 * v4);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 64);
        while ( v10 >= 0 )
        {
          if ( (_DWORD)v10 != 0x7FFFFFFF )
          {
            v11 = v10;
            v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 64), v10 + 1, v10);
            if ( v11 != v10 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v10 + 16));
      }
LABEL_11:
      *a3 = *(_QWORD *)(v8 + 8 * v4);
    }
    else
    {
      v7 = -2147023728;
    }
    ++v4;
  }
  while ( v7 < 0 );
  for ( i = 0LL; v7 < 0 && i < a1[14]; ++i )
  {
    if ( CApplicationFrameWrapper::IsEqualByProxy(
           (CApplicationFrameWrapper *)(*(_QWORD *)(a1[13] + 8 * i) + 8LL),
           (struct IApplicationFrameProxy *)a2) )
    {
      v13 = a1[13];
      v7 = 0;
      v14 = *(_QWORD *)(v13 + 8 * i);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 64);
        while ( v15 >= 0 )
        {
          if ( (_DWORD)v15 != 0x7FFFFFFF )
          {
            v16 = v15;
            v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 64), v15 + 1, v15);
            if ( v16 != v15 )
              continue;
          }
          goto LABEL_24;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v15 + 16));
      }
LABEL_24:
      *a3 = *(_QWORD *)(v13 + 8 * i);
    }
    else
    {
      v7 = -2147023728;
    }
  }
  return (unsigned int)v7;
}
