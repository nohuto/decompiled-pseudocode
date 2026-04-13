/*
 * XREFs of ?uncaught_exception@std@@YA_NXZ @ 0x1800B353C
 * Callers:
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x180034D40 (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x18003594C (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x180048E08 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x180079FB0 (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??1sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@XZ @ 0x18007A254 (--1sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@XZ.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x18007A95C (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@_W@Z @ 0x18009C3E4 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@_W@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool std::uncaught_exception(void)
{
  return __uncaught_exception();
}
