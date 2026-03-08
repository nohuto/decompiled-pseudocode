/*
 * XREFs of ?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAXPEAG@Z @ 0x1C0065EF0
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C0022890 (--1-$unique_storage@U-$resource_policy@PEAG$$A6AXPEAG@_E$1-FreePoolWithTag@-$pool_helpers@PEAG$0.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1C00228B0 (-reset@-$unique_storage@U-$resource_policy@PEAG$$A6AXPEAG@_E$1-FreePoolWithTag@-$pool_helpers@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::pool_helpers<unsigned short *,0>::FreePoolWithTag(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
