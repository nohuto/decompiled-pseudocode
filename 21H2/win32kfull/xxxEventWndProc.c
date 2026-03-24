/*
 * XREFs of xxxEventWndProc @ 0x1C0023BA0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0023C6C (HMValidateHandleNoRip.c)
 *     ??9?$RedirectedFieldfnid@G@tagWND@@QEBAEAEBG@Z @ 0x1C004684C (--9-$RedirectedFieldfnid@G@tagWND@@QEBAEAEBG@Z.c)
 *     xxxDefWindowProc @ 0x1C0048580 (xxxDefWindowProc.c)
 *     xxxChangeMonitorFlags @ 0x1C01283AC (xxxChangeMonitorFlags.c)
 *     ClientEventCallback @ 0x1C02288A8 (ClientEventCallback.c)
 */

__int64 __fastcall xxxEventWndProc(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int16 v10; // dx
  __int16 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  if ( (unsigned __int8)tagWND::RedirectedFieldfnid<unsigned short>::operator!=(a1 + 87, &v12) )
    return 0LL;
  v8 = *(_QWORD **)(a1 + 280);
  if ( v8 && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 252LL) >= 8u )
  {
    LOBYTE(v7) = 9;
    v9 = HMValidateHandleNoRip(*v8, v7);
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    if ( a2 == 2 )
    {
      xxxChangeMonitorFlags(v9, 0LL);
      return 0LL;
    }
    if ( a2 == 60 )
    {
      v10 = *(_WORD *)(a4 + 4);
      if ( (*(_DWORD *)(v9 + 40) & *(_DWORD *)a4) != 0 )
      {
        if ( !v10 )
          return 0LL;
      }
      else if ( v10 )
      {
        return 0LL;
      }
      ClientEventCallback(*(_QWORD *)(v9 + 56), a4);
      return 0LL;
    }
  }
  return xxxDefWindowProc((struct tagWND *)a1);
}
