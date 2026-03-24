/*
 * XREFs of SetDialogPointer @ 0x1C0031720
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$RedirectedFieldfnid@G@tagWND@@QEBAE$$QEAG@Z @ 0x1C0030CE8 (--8-$RedirectedFieldfnid@G@tagWND@@QEBAE$$QEAG@Z.c)
 *     unsafe_cast_fnid_zero_to_PDIALOG @ 0x1C003185C (unsafe_cast_fnid_zero_to_PDIALOG.c)
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z @ 0x1C0033C1C (--9-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetDialogPointer(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h]
  int v10; // [rsp+60h] [rbp+18h] BYREF

  v9 = a2;
  v8 = a1;
  v4 = *(_QWORD *)(a1 + 40);
  if ( *(int *)(v4 + 200) >= 30
    && (*(_BYTE *)(v4 + 18) & 4) == 0
    && PsGetCurrentProcessWin32Process(v4) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL)
    && (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x800) == 0 )
  {
    v10 = 0;
    if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(a1 + 321, &v10)
      && (LOWORD(v10) = 0, tagWND::RedirectedFieldfnid<unsigned short>::operator==(a1 + 87, &v10)) )
    {
      LODWORD(v8) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 68LL);
    }
    else
    {
      v5 = unsafe_cast_fnid_zero_to_PDIALOG(a1);
      if ( v5 )
      {
        *(_QWORD *)(v5 + 8) = a2;
        if ( a2 )
        {
          LOWORD(v8) = 0;
          if ( tagWND::RedirectedFieldfnid<unsigned short>::operator==(a1 + 87, &v8) )
            *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) = 676;
          v6 = 1LL;
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) |= 0x4000u;
          v6 = 0LL;
        }
        SetOrClrWF(v6, a1, 513LL, 1LL);
      }
    }
  }
  return 1LL;
}
