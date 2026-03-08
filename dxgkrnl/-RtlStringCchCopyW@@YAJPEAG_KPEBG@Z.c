/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0019400
 * Callers:
 *     _lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator() @ 0x1C01AA250 (_lambda_b5f01eb3f4b149c357ab2eab84592b3f_--operator().c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C01E0008 (MonitorFillMonitorDeviceInfo.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C01F9AA4 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C020E880 (-ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z.c)
 *     ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1C039FC7C (-DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyW(char *a1, __int64 a2, char *a3)
{
  __int64 v3; // r9
  signed __int64 v4; // r10
  unsigned __int16 v5; // ax
  unsigned __int16 *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = a3 - a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = *(_WORD *)&a1[v4];
      if ( !v5 )
        break;
      *(_WORD *)a1 = v5;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    v6 = (unsigned __int16 *)(a1 - 2);
    if ( a2 )
      v6 = (unsigned __int16 *)a1;
    *v6 = 0;
    return a2 == 0 ? 0x80000005 : 0;
  }
  return result;
}
